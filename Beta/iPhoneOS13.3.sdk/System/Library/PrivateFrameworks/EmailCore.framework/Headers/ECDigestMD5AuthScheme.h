/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECAuthScheme.h>

@interface ECDigestMD5AuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)digestMD5AuthScheme;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
