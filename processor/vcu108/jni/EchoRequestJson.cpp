#include "GeneratedTypes.h"
#ifdef PORTAL_JSON
#include "jsoncpp/json/json.h"

int EchoRequestJson_say ( struct PortalInternal *p, const uint32_t v )
{
    Json::Value request;
    request.append(Json::Value("say"));
    request.append((Json::UInt64)v);

    std::string requestjson = Json::FastWriter().write(request);;
    connectalJsonSend(p, requestjson.c_str(), (int)CHAN_NUM_EchoRequest_say);
    return 0;
};

int EchoRequestJson_say2 ( struct PortalInternal *p, const uint16_t a, const uint16_t b )
{
    Json::Value request;
    request.append(Json::Value("say2"));
    request.append((Json::UInt64)a);
    request.append((Json::UInt64)b);

    std::string requestjson = Json::FastWriter().write(request);;
    connectalJsonSend(p, requestjson.c_str(), (int)CHAN_NUM_EchoRequest_say2);
    return 0;
};

int EchoRequestJson_setLeds ( struct PortalInternal *p, const uint8_t v )
{
    Json::Value request;
    request.append(Json::Value("setLeds"));
    request.append((Json::UInt64)v);

    std::string requestjson = Json::FastWriter().write(request);;
    connectalJsonSend(p, requestjson.c_str(), (int)CHAN_NUM_EchoRequest_setLeds);
    return 0;
};

EchoRequestCb EchoRequestJsonProxyReq = {
    portal_disconnect,
    EchoRequestJson_say,
    EchoRequestJson_say2,
    EchoRequestJson_setLeds,
};
EchoRequestCb *pEchoRequestJsonProxyReq = &EchoRequestJsonProxyReq;
const char * EchoRequestJson_methodSignatures()
{
    return "{\"say\": [\"long\"], \"say2\": [\"long\", \"long\"], \"setLeds\": [\"long\"]}";
}

int EchoRequestJson_handleMessage(struct PortalInternal *p, unsigned int channel, int messageFd)
{
    static int runaway = 0;
    int   tmp __attribute__ ((unused));
    int tmpfd __attribute__ ((unused));
    EchoRequestData tempdata __attribute__ ((unused));
    memset(&tempdata, 0, sizeof(tempdata));
    Json::Value msg = Json::Value(connectalJsonReceive(p));
    switch (channel) {
    case CHAN_NUM_EchoRequest_say: {
        ((EchoRequestCb *)p->cb)->say(p, tempdata.say.v);
      } break;
    case CHAN_NUM_EchoRequest_say2: {
        ((EchoRequestCb *)p->cb)->say2(p, tempdata.say2.a, tempdata.say2.b);
      } break;
    case CHAN_NUM_EchoRequest_setLeds: {
        ((EchoRequestCb *)p->cb)->setLeds(p, tempdata.setLeds.v);
      } break;
    default:
        PORTAL_PRINTF("EchoRequestJson_handleMessage: unknown channel 0x%x\n", channel);
        if (runaway++ > 10) {
            PORTAL_PRINTF("EchoRequestJson_handleMessage: too many bogus indications, exiting\n");
#ifndef __KERNEL__
            exit(-1);
#endif
        }
        return 0;
    }
    return 0;
}
#endif /* PORTAL_JSON */
