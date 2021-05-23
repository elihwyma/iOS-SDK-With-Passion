/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/Swift-Protocol.h>

@class NSString, _SFKeySpecifier;

@protocol _SFKeyAttributes <Swift>

@property (copy, nonatomic, readonly) _SFKeySpecifier *keySpecifier;
@property (copy, nonatomic, readonly) NSString *keyDomain;

+ (unsigned short)alloc;

@end
