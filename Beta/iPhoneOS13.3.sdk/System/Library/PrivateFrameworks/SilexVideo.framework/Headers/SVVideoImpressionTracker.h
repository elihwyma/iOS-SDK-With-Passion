/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SVTimeBasedAction, SVTimeline;

@protocol SVVideoDurationObserving;

@interface SVVideoImpressionTracker : NSObject

{
    _Bool _passedImpressionThreshold;
    CDUnknownBlockType _thresholdImpressionBlock;
    CDUnknownBlockType _quartileImpressionBlock;
    double _impressionThreshold;
    unsigned long long _quartile;
    SVTimeline *_timeline;
    id <SVVideoDurationObserving> _durationObserver;
    SVTimeBasedAction *_impressionAction;
    NSMutableArray *_actions;
}

@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) id <SVVideoDurationObserving> durationObserver;
@property (retain, nonatomic) SVTimeBasedAction *impressionAction;
@property (nonatomic, readonly) NSMutableArray *actions;
@property (nonatomic, getter=hasPassedImpressionThreshold, setter=setHasPassedImpressionThreshold:) _Bool passedImpressionThreshold;
@property (nonatomic) unsigned long long quartile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=uponThresholdImpression:) CDUnknownBlockType thresholdImpressionBlock;
@property (copy, nonatomic, setter=uponQuartileImpression:) CDUnknownBlockType quartileImpressionBlock;
@property (nonatomic, readonly) double impressionThreshold;

- (void)dealloc;
- (void)configureTimelineForImpressionReportingWithDuration:(double)arg1;
- (void)configureTimelineForQuartileReportingWithDuration:(double)arg1;
- (id)initWithTimeline:(id)arg1 impressionThreshold:(double)arg2 durationObserver:(id)arg3;

@end
