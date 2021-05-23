/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class AVPlayer, HFCameraClipPlayerItem, HFCameraClipPosition, HFCameraClipQueuePlayer, HMCameraProfile, NSArray, NSError, NSString;

@protocol HFCameraClipPlayerDelegate, HFCameraClipScrubbing;

@interface HFCameraClipPlayer : NSObject

{
    _Bool _scrubbing;
    _Bool _mutatingQueue;
    id <HFCameraClipPlayerDelegate> _delegate;
    id <HFCameraClipScrubbing> _scrubber;
    HMCameraProfile *_cameraProfile;
    NSArray *_clips;
    NSError *_error;
    HFCameraClipPlayerItem *_lastPlayerItem;
    HFCameraClipQueuePlayer *_queuePlayer;
}

@property (nonatomic, getter=isMutatingQueue) _Bool mutatingQueue;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) HFCameraClipPlayerItem *lastPlayerItem;
@property (nonatomic, readonly) HFCameraClipQueuePlayer *queuePlayer;
@property (nonatomic, readonly) AVPlayer *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *queuableItems;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) NSArray *clips;
@property (weak, nonatomic) id <HFCameraClipPlayerDelegate> delegate;
@property (weak, nonatomic) id <HFCameraClipScrubbing> scrubber;
@property (copy, nonatomic) HFCameraClipPosition *currentPosition;
@property (nonatomic, readonly) long long timeControlStatus;
@property (nonatomic, readonly) _Bool hasFatalError;
@property (nonatomic, getter=isScrubbing) _Bool scrubbing;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)play;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeQueueableItem:(id)arg1;
- (id)createQueueableItemForClipManager:(id)arg1 clip:(id)arg2;
- (void)insertQueueableItem:(id)arg1 afterItem:(id)arg2;
- (void)seekToOffset:(double)arg1 inItem:(id)arg2;
- (id)initWithCameraProfile:(id)arg1 clips:(id)arg2;
- (id)initWithCameraProfile:(id)arg1 clips:(id)arg2 queuePlayer:(id)arg3;
- (void)_updatePlayerActionAtItemEnd;
- (void)_setupPlayerObservation;
- (void)_rebuildPlayerQueueForPosition:(id)arg1;
- (void)_setupObservationForLastPlayerItem:(id)arg1;
- (void)_updateErrorState;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)endScrubbingWithOffset:(double)arg1;

@end
