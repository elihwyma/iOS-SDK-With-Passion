/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVPlayerTimeControlStatusObserving <Swift>

@property (nonatomic, readonly) long long timeControlStatus;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
