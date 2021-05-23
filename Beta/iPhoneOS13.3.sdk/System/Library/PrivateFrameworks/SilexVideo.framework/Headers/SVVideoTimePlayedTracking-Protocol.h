/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoTimePlayedTracking <Swift>

@property (nonatomic, readonly) double timePlayed;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
