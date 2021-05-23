/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class NSError;

@protocol SVPlayerStatusObserving <Swift>

@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;
@property (copy, nonatomic, readonly) NSError *error;

@end
