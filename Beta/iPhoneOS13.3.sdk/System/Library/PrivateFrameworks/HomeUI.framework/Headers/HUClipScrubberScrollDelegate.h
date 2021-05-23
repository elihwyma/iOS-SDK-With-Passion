/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class HFCameraPlaybackEngine, HMCameraClip, HUClipScrubberDataSource, NSString, UICollectionView;

@interface HUClipScrubberScrollDelegate : NSObject <Swift>

{
    _Bool _shouldIgnoreScrolling;
    _Bool _isUserScrubbing;
    _Bool _hasUserInteractedWithScrubber;
    HUClipScrubberDataSource *_dataSource;
    UICollectionView *_clipCollectionView;
    HFCameraPlaybackEngine *_playbackEngine;
    double _lastContentWidth;
    HMCameraClip *_currentClip;
    double _targetScrollOffset;
}

@property (nonatomic) _Bool isUserScrubbing;
@property (nonatomic) _Bool hasUserInteractedWithScrubber;
@property (nonatomic) double lastContentWidth;
@property (retain, nonatomic) HMCameraClip *currentClip;
@property (nonatomic) double targetScrollOffset;
@property (weak, nonatomic) HUClipScrubberDataSource *dataSource;
@property (weak, nonatomic) UICollectionView *clipCollectionView;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic) _Bool shouldIgnoreScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginEditing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDataSource:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)updateCollectionView:(id)arg1;
- (void)finishEditing;
- (void)updatePlaybackEngineDate:(id)arg1;
- (_Bool)_indexPathContainsClip:(id)arg1;
- (_Bool)_shouldScrollBypassPlaybackEngineUpdate;
- (float)playheadPosition;
- (void)_handleOutOfBoundsTimelinePosition:(float)arg1;
- (id)_selectedDateForClipInRect:(struct CGRect)arg1;
- (id)_selectedDateForAreaOfNoActivityAtPoint:(struct CGPoint)arg1 inScrollView:(id)arg2;
- (_Bool)_spacerPrecedingClipSpansMultipleDays:(id)arg1;
- (id)_selectedDateForTodayFromClip:(id)arg1 percentDuration:(float)arg2;
- (id)_selectedDateForYesterdayFromPreviousClip:(id)arg1 percentDuration:(float)arg2;
- (id)_interpolatedDateFromClip:(id)arg1 toClip:(id)arg2 insideRect:(struct CGRect)arg3 atTimelinePosition:(float)arg4;

@end
