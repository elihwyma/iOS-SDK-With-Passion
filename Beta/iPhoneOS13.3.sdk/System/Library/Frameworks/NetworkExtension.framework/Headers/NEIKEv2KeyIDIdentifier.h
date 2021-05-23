/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Identifier.h>

@interface NEIKEv2KeyIDIdentifier : NEIKEv2Identifier

+ (id)copyTypeDescription;

- (unsigned long long)identifierType;
- (id)initWithKeyID:(id)arg1;
- (id)initWithKeyIDString:(id)arg1;

@end
