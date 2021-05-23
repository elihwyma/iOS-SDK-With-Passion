/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFCameraPlaybackEngine, HMCameraClip, HUClipScrubberSelectionView, HUClipScrubberTimeController, NSArray, NSDate, NSString, UICollectionView;

@interface HUClipScrubberDataSource : NSObject

{
    _Bool _editing;
    _Bool _selectionViewHidden;
    NSArray *_clips;
    HUClipScrubberTimeController *_timeController;
    HMCameraClip *_currentClip;
    UICollectionView *_clipCollectionView;
    unsigned long long _currentTimelineState;
    unsigned long long _displayMode;
    NSDate *_currentDate;
    HFCameraPlaybackEngine *_playbackEngine;
    unsigned long long _mostRecentClipIndex;
    long long _lastSelectedClipIndex;
    double _startingPinchDeltaX;
    HUClipScrubberSelectionView *_selectionView;
    double _lastGestureScale;
}

@property (retain, nonatomic) HUClipScrubberTimeController *timeController;
@property (nonatomic) double startingPinchDeltaX;
@property (retain, nonatomic) HUClipScrubberSelectionView *selectionView;
@property (nonatomic) double lastGestureScale;
@property (nonatomic, readonly) NSArray *clips;
@property (weak, nonatomic) HMCameraClip *currentClip;
@property (weak, nonatomic) UICollectionView *clipCollectionView;
@property (nonatomic) unsigned long long currentTimelineState;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (retain, nonatomic) NSDate *currentDate;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) unsigned long long mostRecentClipIndex;
@property (nonatomic) long long lastSelectedClipIndex;
@property (nonatomic) _Bool selectionViewHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)playbackEngine:(id)arg1 didUpdateClips:(id)arg2;
- (void)playbackEngine:(id)arg1 didRemoveClips:(id)arg2;
- (void)reloadClips:(id)arg1;
- (void)updateMostRecentClipIndex;
- (void)_updateClipCollectionView;
- (void)updateSelectionViewIfNeeded;
- (_Bool)_isZoomingIn:(double)arg1;
- (id)startDateFromCell:(id)arg1;
- (id)selectedDateFromCell:(id)arg1 atCurrentOffset:(double)arg2;
- (id)_indexPathsForClip:(id)arg1;
- (_Bool)isClipLocatedAtIndexPath:(id)arg1;
- (void)toggleSelectionStateForItemAtIndexPath:(id)arg1;
- (void)updateToClipAtIndexPath:(id)arg1;
- (id)initWithClips:(id)arg1;
- (void)beginTimeScaleTrackingForPinchGesture:(id)arg1;
- (void)changeTimeScaleForPinchGesture:(id)arg1;
- (double)offsetForClip:(id)arg1;
- (id)selectedDateFromCell:(id)arg1 atOffset:(double)arg2;
- (double)scrubbingResolutionForClip:(id)arg1;

@end
