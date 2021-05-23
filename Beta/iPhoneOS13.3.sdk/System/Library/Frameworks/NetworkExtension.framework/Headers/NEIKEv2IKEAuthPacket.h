/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2AuthPayload, NEIKEv2ChildSAPayload, NEIKEv2ConfigPayload, NEIKEv2EAPPayload, NEIKEv2InitiatorIdentifierPayload, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2ResponderIdentifierPayload, NEIKEv2ResponderTrafficSelectorPayload, NSArray;

@interface NEIKEv2IKEAuthPacket : NEIKEv2Packet

{
    NEIKEv2ChildSAPayload *_sa;
    NEIKEv2InitiatorIdentifierPayload *_idi;
    NEIKEv2ResponderIdentifierPayload *_idr;
    NSArray *_certificates;
    NSArray *_certificateRequests;
    NEIKEv2AuthPayload *_auth;
    NEIKEv2EAPPayload *_eap;
    NEIKEv2ConfigPayload *_config;
    NEIKEv2InitiatorTrafficSelectorPayload *_tsi;
    NEIKEv2ResponderTrafficSelectorPayload *_tsr;
    NSArray *_vendorIDs;
}

@property (retain) NEIKEv2ChildSAPayload *sa;
@property (retain) NEIKEv2InitiatorIdentifierPayload *idi;
@property (retain) NEIKEv2ResponderIdentifierPayload *idr;
@property (retain) NSArray *certificates;
@property (retain) NSArray *certificateRequests;
@property (retain) NEIKEv2AuthPayload *auth;
@property (retain) NEIKEv2EAPPayload *eap;
@property (retain) NEIKEv2ConfigPayload *config;
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload *tsi;
@property (retain) NEIKEv2ResponderTrafficSelectorPayload *tsr;
@property (retain) NSArray *vendorIDs;

+ (id)copyTypeDescription;
+ (id)createEAPForInitiatorIKESA:(id)arg1 childSA:(id)arg2 lastResponderPacket:(id)arg3;
+ (id)createIKEAuthForInitiatorIKESA:(id)arg1 childSA:(id)arg2;
+ (id)createIKEAuthResponse:(id)arg1 refusalError:(unsigned long long)arg2;
+ (id)createIKEAuthResponse:(id)arg1 ikeSA:(id)arg2 childSA:(id)arg3;
+ (unsigned long long)exchangeType;

- (id)validateEAPOnlyAuthentication:(id)arg1;
- (_Bool)validateAuthAsInitiator:(id)arg1 childSA:(id)arg2;
- (id)validateAuthPart1AsResponderCopyErrorForIKESA:(id)arg1;
- (id)validateAuthPart2AsResponderCopyErrorForIKESA:(id)arg1 childSA:(id)arg2;
- (_Bool)validateFirstAuthPayloadsForInitiator:(id)arg1 childSA:(id)arg2;
- (void)gatherPayloads;
- (void)filloutPayloads;

@end
