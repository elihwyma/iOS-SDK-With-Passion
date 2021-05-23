/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2IKESAPayload, NEIKEv2KeyExchangePayload, NEIKEv2NoncePayload, NEIKEv2NotifyPayload, NSArray;

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet

{
    NEIKEv2NotifyPayload *_cookie;
    NEIKEv2IKESAPayload *_sa;
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NoncePayload *_nonce;
    NSArray *_vendorIDs;
}

@property (retain) NEIKEv2NotifyPayload *cookie;
@property (retain) NEIKEv2IKESAPayload *sa;
@property (retain) NEIKEv2KeyExchangePayload *ke;
@property (retain) NEIKEv2NoncePayload *nonce;
@property (retain) NSArray *vendorIDs;

+ (id)copyTypeDescription;
+ (id)createIKESAInitForInitiatorIKESA:(id)arg1;
+ (id)createIKESAInitResponse:(id)arg1 errorCode:(unsigned long long)arg2 errorData:(id)arg3;
+ (id)createIKESAInitResponse:(id)arg1 ikeSA:(id)arg2;
+ (unsigned long long)exchangeType;
+ (_Bool)encryptPayloads;

- (_Bool)validateSAInitAsInitiator:(id)arg1;
- (_Bool)validateSAInitAsResponder:(id)arg1 sendInvalidKE:(_Bool *)arg2;
- (void)gatherPayloads;
- (void)filloutPayloads;

@end
