/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject

{
    AVVideoPerformanceMetricsInternal *_performanceMetricsInternal;
}

@property (nonatomic, readonly) unsigned long long totalNumberOfVideoFrames;
@property (nonatomic, readonly) unsigned long long numberOfDroppedVideoFrames;
@property (nonatomic, readonly) unsigned long long numberOfCorruptedVideoFrames;
@property (nonatomic, readonly) unsigned long long numberOfDisplayCompositedVideoFrames;
@property (nonatomic, readonly) unsigned long long numberOfNonDisplayCompositedVideoFrames;
@property (nonatomic, readonly) double totalFrameDelay;

- (id)init;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
