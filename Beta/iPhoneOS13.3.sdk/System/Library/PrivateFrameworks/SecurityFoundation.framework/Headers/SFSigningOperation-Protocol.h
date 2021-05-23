/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/Swift-Protocol.h>

@class _SFKeySpecifier;

@protocol SFSigningOperation <Swift>

@property (copy, nonatomic, readonly) _SFKeySpecifier *signingKeySpecifier;

- (unsigned short)verify:withKey:error: /* Error: Ran out of types for this method. */;
- (unsigned short)sign:withKey:error: /* Error: Ran out of types for this method. */;

@end
