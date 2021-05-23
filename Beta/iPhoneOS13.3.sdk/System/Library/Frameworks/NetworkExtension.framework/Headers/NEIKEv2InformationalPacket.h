/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2ConfigPayload, NSArray;

@interface NEIKEv2InformationalPacket : NEIKEv2Packet

{
    NSArray *_deletes;
    NEIKEv2ConfigPayload *_config;
}

@property (readonly) _Bool isKeepalive;
@property (readonly) _Bool isDeleteIKE;
@property (readonly) _Bool isDeleteChild;
@property (readonly) _Bool isMOBIKE;
@property (retain) NSArray *deletes;
@property (retain) NEIKEv2ConfigPayload *config;

+ (id)copyTypeDescription;
+ (id)createDeleteIKE;
+ (id)createInformationalResponse:(id)arg1 ikeSA:(id)arg2;
+ (id)createDeleteChild:(id)arg1;
+ (id)createDeleteResponse:(id)arg1 child:(id)arg2;
+ (id)createInformationalPacketWithNATPayload:(id)arg1;
+ (id)createInformational;
+ (id)createNotifyPacketForType:(unsigned long long)arg1 data:(id)arg2;
+ (id)createUpdateAddressInitiator:(id)arg1;
+ (id)createMOBIKEPacketResponse:(id)arg1 ikeSA:(id)arg2;
+ (id)createDeleteIKEResponse:(id)arg1;
+ (unsigned long long)exchangeType;

- (_Bool)validateInformational;
- (_Bool)validateDeleteChild:(id)arg1;
- (_Bool)validateDeleteIKE;
- (_Bool)validateUpdateAddresses:(id)arg1;
- (_Bool)validateMOBIKE:(id)arg1;
- (_Bool)validateKeepalive;
- (void)gatherPayloads;
- (void)filloutPayloads;

@end
