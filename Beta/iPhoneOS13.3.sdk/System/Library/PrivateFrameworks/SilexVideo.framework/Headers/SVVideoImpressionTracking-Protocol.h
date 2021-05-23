/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoImpressionTracking <Swift>

@property (copy, nonatomic, setter=uponThresholdImpression:) CDUnknownBlockType thresholdImpressionBlock;
@property (copy, nonatomic, setter=uponQuartileImpression:) CDUnknownBlockType quartileImpressionBlock;
@property (nonatomic, readonly, getter=hasPassedImpressionThreshold) _Bool passedImpressionThreshold;
@property (nonatomic, readonly) double impressionThreshold;
@property (nonatomic, readonly) unsigned long long quartile;

@end
