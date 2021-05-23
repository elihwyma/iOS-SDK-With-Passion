/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload

{
    NEIKEv2Identifier *_identifier;
}

@property (retain) NEIKEv2Identifier *identifier;

+ (id)copyTypeDescription;

- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
