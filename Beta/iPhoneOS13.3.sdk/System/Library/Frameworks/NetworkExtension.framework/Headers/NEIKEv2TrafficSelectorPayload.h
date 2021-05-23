/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload

{
    NSArray *_trafficSelectors;
}

@property (retain) NSArray *trafficSelectors;

+ (id)copyTypeDescription;

- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
