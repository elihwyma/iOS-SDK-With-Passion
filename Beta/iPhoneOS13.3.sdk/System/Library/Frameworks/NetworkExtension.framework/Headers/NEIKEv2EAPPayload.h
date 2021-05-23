/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2EAPPayload : NEIKEv2Payload

{
    NSData *_eapMessage;
}

@property (retain) NSData *eapMessage;

+ (id)copyTypeDescription;

- (id)description;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
