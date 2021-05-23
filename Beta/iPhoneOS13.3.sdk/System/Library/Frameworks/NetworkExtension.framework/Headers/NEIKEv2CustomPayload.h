/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2CustomPayload : NEIKEv2Payload

{
    unsigned long long _customType;
    NSData *_customData;
}

@property unsigned long long customType;
@property (retain) NSData *customData;

+ (id)copyTypeDescription;

- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
