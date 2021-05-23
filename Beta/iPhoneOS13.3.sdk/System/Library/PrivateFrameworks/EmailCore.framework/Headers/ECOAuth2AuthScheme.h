/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECAuthScheme.h>

@interface ECOAuth2AuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)oauth2AuthScheme;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (_Bool)requiresPassword;
- (unsigned int)applescriptScheme;
- (_Bool)requiresUsername;
- (id)supportedSASLMechanisms;

@end
