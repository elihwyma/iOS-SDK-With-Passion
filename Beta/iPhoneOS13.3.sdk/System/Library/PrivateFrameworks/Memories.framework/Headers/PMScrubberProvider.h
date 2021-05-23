/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString, VEKResult;

@protocol OS_dispatch_queue, PMScrubberProviderActionDelegate, PMScrubberProviderDelegate;

@interface PMScrubberProvider : NSObject

{
    _Bool _isPlayingCurrent;
    _Bool _isPlayingPrevious;
    _Bool _isScrubbing;
    id <PMScrubberProviderDelegate> _delegate;
    id <PMScrubberProviderActionDelegate> _actionDelegate;
    double _currentProgress;
    double _currentDuration;
    VEKResult *_currentResult;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) VEKResult *currentResult;
@property (nonatomic) double currentDuration;
@property (nonatomic) _Bool isPlayingCurrent;
@property (nonatomic) _Bool isPlayingPrevious;
@property (nonatomic) double currentProgress;
@property (nonatomic) _Bool isScrubbing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak, nonatomic) id <PMScrubberProviderDelegate> delegate;
@property (weak, nonatomic) id <PMScrubberProviderActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)updateWithResult:(id)arg1;
- (void)playbackProgressDidChange:(CDStruct_1b6d18a9)arg1;
- (void)playbackStatusDidChange:(_Bool)arg1;
- (void)willEnterEditMode;
- (long long)clipIndexWithTime:(double)arg1;
- (void)imageForItem:(long long)arg1 withThumbnailCount:(long long)arg2 size:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)scrubberTapped;
- (void)scrubberReleasedWithProgress:(double)arg1;
- (void)scrubberToggled;
- (void)scrubberTouched;
- (void)scrubberScrolledWithProgress:(double)arg1;

@end
