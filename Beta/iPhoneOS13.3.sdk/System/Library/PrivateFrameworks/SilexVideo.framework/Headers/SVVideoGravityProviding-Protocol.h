/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class NSString;

@protocol SVVideoGravityProviding <Swift>

@property (copy, nonatomic, readonly) NSString *videoGravity;
@property (copy, nonatomic, readonly) NSString *portraitVideoGravity;
@property (copy, nonatomic, readonly) NSString *landscapeVideoGravity;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
