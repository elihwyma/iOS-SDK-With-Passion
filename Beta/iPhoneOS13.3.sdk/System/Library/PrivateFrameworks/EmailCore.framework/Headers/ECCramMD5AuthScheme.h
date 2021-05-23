/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECAuthScheme.h>

@interface ECCramMD5AuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)cramMD5AuthScheme;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
