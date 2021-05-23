/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECAuthScheme.h>

@interface ECPlainAuthScheme : ECAuthScheme

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)plainAuthScheme;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
