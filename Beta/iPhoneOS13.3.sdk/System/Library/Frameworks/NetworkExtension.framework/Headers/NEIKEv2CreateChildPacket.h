/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2ChildSAPayload, NEIKEv2ConfigPayload, NEIKEv2IKESAPayload, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2KeyExchangePayload, NEIKEv2NoncePayload, NEIKEv2ResponderTrafficSelectorPayload, NSArray;

@interface NEIKEv2CreateChildPacket : NEIKEv2Packet

{
    NEIKEv2IKESAPayload *_ikeSA;
    NEIKEv2ChildSAPayload *_childSA;
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NoncePayload *_nonce;
    NEIKEv2ConfigPayload *_config;
    NEIKEv2InitiatorTrafficSelectorPayload *_tsi;
    NEIKEv2ResponderTrafficSelectorPayload *_tsr;
    NSArray *_vendorIDs;
}

@property (readonly) _Bool isRekeyIKE;
@property (readonly) _Bool isRekeyChild;
@property (retain) NEIKEv2IKESAPayload *ikeSA;
@property (retain) NEIKEv2ChildSAPayload *childSA;
@property (retain) NEIKEv2KeyExchangePayload *ke;
@property (retain) NEIKEv2NoncePayload *nonce;
@property (retain) NEIKEv2ConfigPayload *config;
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload *tsi;
@property (retain) NEIKEv2ResponderTrafficSelectorPayload *tsr;
@property (retain) NSArray *vendorIDs;

+ (id)copyTypeDescription;
+ (id)createChildSAForInitiatorChildSA:(id)arg1;
+ (id)createChildSAResponse:(id)arg1 childSA:(id)arg2;
+ (id)createRekeyChildSAForInitiator:(id)arg1;
+ (id)createRekeyResponse:(id)arg1 childSA:(id)arg2;
+ (id)createRekeyIKESAForInitiator:(id)arg1;
+ (id)createRekeyResponse:(id)arg1 ikeSA:(id)arg2;
+ (id)createChildSAResponse:(id)arg1 errorCode:(unsigned long long)arg2 errorData:(id)arg3;
+ (unsigned long long)exchangeType;

- (_Bool)validateCreateChildAsInitiator:(id)arg1;
- (_Bool)validateCreateChildAsResponder:(id)arg1;
- (_Bool)validateRekeyChildSA:(id)arg1;
- (_Bool)validateResponderRekeyChildSA:(id)arg1 sendInvalidKE:(_Bool *)arg2;
- (_Bool)validateRekeyIKESA:(id)arg1;
- (_Bool)validateResponderRekeyIKESA:(id)arg1 sendInvalidKE:(_Bool *)arg2;
- (void)gatherPayloads;
- (void)filloutPayloads;

@end
