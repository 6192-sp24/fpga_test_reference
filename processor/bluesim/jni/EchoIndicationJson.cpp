#include "GeneratedTypes.h"
#ifdef PORTAL_JSON
#include "jsoncpp/json/json.h"

int EchoIndicationJson_heard ( struct PortalInternal *p, const uint32_t v )
{
    Json::Value request;
    request.append(Json::Value("heard"));
    request.append((Json::UInt64)v);

    std::string requestjson = Json::FastWriter().write(request);;
    connectalJsonSend(p, requestjson.c_str(), (int)CHAN_NUM_EchoIndication_heard);
    return 0;
};

int EchoIndicationJson_heard2 ( struct PortalInternal *p, const uint16_t a, const uint16_t b )
{
    Json::Value request;
    request.append(Json::Value("heard2"));
    request.append((Json::UInt64)a);
    request.append((Json::UInt64)b);

    std::string requestjson = Json::FastWriter().write(request);;
    connectalJsonSend(p, requestjson.c_str(), (int)CHAN_NUM_EchoIndication_heard2);
    return 0;
};

EchoIndicationCb EchoIndicationJsonProxyReq = {
    portal_disconnect,
    EchoIndicationJson_heard,
    EchoIndicationJson_heard2,
};
EchoIndicationCb *pEchoIndicationJsonProxyReq = &EchoIndicationJsonProxyReq;
const char * EchoIndicationJson_methodSignatures()
{
    return "{\"heard\": [\"long\"], \"heard2\": [\"long\", \"long\"]}";
}

int EchoIndicationJson_handleMessage(struct PortalInternal *p, unsigned int channel, int messageFd)
{
    static int runaway = 0;
    int   tmp __attribute__ ((unused));
    int tmpfd __attribute__ ((unused));
    EchoIndicationData tempdata __attribute__ ((unused));
    memset(&tempdata, 0, sizeof(tempdata));
    Json::Value msg = Json::Value(connectalJsonReceive(p));
    switch (channel) {
    case CHAN_NUM_EchoIndication_heard: {
        ((EchoIndicationCb *)p->cb)->heard(p, tempdata.heard.v);
      } break;
    case CHAN_NUM_EchoIndication_heard2: {
        ((EchoIndicationCb *)p->cb)->heard2(p, tempdata.heard2.a, tempdata.heard2.b);
      } break;
    default:
        PORTAL_PRINTF("EchoIndicationJson_handleMessage: unknown channel 0x%x\n", channel);
        if (runaway++ > 10) {
            PORTAL_PRINTF("EchoIndicationJson_handleMessage: too many bogus indications, exiting\n");
#ifndef __KERNEL__
            exit(-1);
#endif
        }
        return 0;
    }
    return 0;
}
#endif /* PORTAL_JSON */
