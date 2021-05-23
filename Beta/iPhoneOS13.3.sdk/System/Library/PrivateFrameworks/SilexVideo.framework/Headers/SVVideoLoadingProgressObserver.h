/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVKeyValueObserver;

@protocol SVPlayerItemObserving, SVVideoDurationObserving;

@interface SVVideoLoadingProgressObserver : NSObject

{
    double _progress;
    CDUnknownBlockType _progressChangedBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    id <SVVideoDurationObserving> _durationObserver;
    SVKeyValueObserver *_loadedTimeRangesObserver;
}

@property (nonatomic, readonly) id <SVPlayerItemObserving> playerItemObserver;
@property (nonatomic, readonly) id <SVVideoDurationObserving> durationObserver;
@property (nonatomic, readonly) SVKeyValueObserver *loadedTimeRangesObserver;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onProgressChanged:) CDUnknownBlockType progressChangedBlock;

- (id)initWithPlayerItemObserver:(id)arg1 durationObserver:(id)arg2;
- (void)updateProgressWithLoadedTimeRanges:(id)arg1 duration:(double)arg2;

@end
