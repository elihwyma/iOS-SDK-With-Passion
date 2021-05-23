/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2DHProtocol, NSData;

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload

{
    NEIKEv2DHProtocol *_dh;
    NSData *_dhPublicKey;
}

@property (retain) NEIKEv2DHProtocol *dh;
@property (retain) NSData *dhPublicKey;

+ (id)copyTypeDescription;

- (id)description;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
