/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2AuthenticationProtocol, NSData;

@interface NEIKEv2AuthPayload : NEIKEv2Payload

{
    NEIKEv2AuthenticationProtocol *_authProtocol;
    NSData *_authenticationData;
}

@property (retain, nonatomic) NEIKEv2AuthenticationProtocol *authProtocol;
@property (nonatomic, readonly) unsigned long long method;
@property (retain, nonatomic) NSData *authenticationData;

+ (id)copyTypeDescription;

- (id)description;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
