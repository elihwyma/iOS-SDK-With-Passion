/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoDurationObserving, SVVideoPeriodicTimeObserving;

@interface SVVideoPlaybackProgressObserver : NSObject

{
    double _time;
    double _duration;
    double _progress;
    CDUnknownBlockType _resetBlock;
    CDUnknownBlockType _progressChangedBlock;
    id <SVVideoPeriodicTimeObserving> _periodicTimeObserver;
    id <SVVideoDurationObserving> _durationObserver;
}

@property (nonatomic, readonly) id <SVVideoPeriodicTimeObserving> periodicTimeObserver;
@property (nonatomic, readonly) id <SVVideoDurationObserving> durationObserver;
@property (nonatomic) double time;
@property (nonatomic) double duration;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onProgressChanged:) CDUnknownBlockType progressChangedBlock;
@property (copy, nonatomic, setter=onReset:) CDUnknownBlockType resetBlock;

- (void)updateProgressWithTime:(double)arg1 duration:(double)arg2;
- (id)initWithPeriodicTimeObserver:(id)arg1 durationObserver:(id)arg2;

@end
