/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload

{
    unsigned long long _protocol;
    NSArray *_spis;
}

@property unsigned long long protocol;
@property (retain) NSArray *spis;

+ (id)copyTypeDescription;

- (id)description;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
