/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECAuthScheme.h>

@interface ECNTLMAuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)ntlmAuthScheme;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
