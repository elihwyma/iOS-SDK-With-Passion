/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECAuthScheme.h>

@interface ECGSSAPIAuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)gssapiAuthScheme;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (_Bool)requiresPassword;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
