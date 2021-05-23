/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload

{
    _Bool _includeDHGroup;
    NSArray *_proposals;
}

@property (retain) NSArray *proposals;
@property _Bool includeDHGroup;

+ (id)copyTypeDescription;

- (id)description;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
