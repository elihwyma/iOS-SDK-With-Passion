/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2IKESPI, NSArray;

@interface NEIKEv2IKESAPayload : NEIKEv2Payload

{
    NSArray *_proposals;
    NEIKEv2IKESPI *_rekeyIKESPI;
}

@property (retain) NSArray *proposals;
@property (retain) NEIKEv2IKESPI *rekeyIKESPI;

+ (id)copyTypeDescription;

- (id)description;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
