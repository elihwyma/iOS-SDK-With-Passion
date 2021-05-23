/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class ISVisibilityOffsetHelper, NSDate, NSHashTable, UIScrollView;

@interface ISScrollViewVitalityController : NSObject

{
    _Bool _enabled;
    _Bool __isPerformingChanges;
    _Bool _scrolling;
    _Bool _decelerating;
    _Bool _hasTargetContentOffset;
    UIScrollView *__scrollView;
    NSHashTable *__playerViews;
    NSDate *_estimatedScrollEndDate;
    ISVisibilityOffsetHelper *_visibilityOffsetHelper;
    struct CGPoint _targetContentOffset;
}

@property (weak, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView;
@property (nonatomic, readonly) NSHashTable *_playerViews;
@property (nonatomic, setter=_setPerformingChanges:) _Bool _isPerformingChanges;
@property (nonatomic, getter=isScrolling) _Bool scrolling;
@property (nonatomic, getter=isDecelerating) _Bool decelerating;
@property (nonatomic) _Bool hasTargetContentOffset;
@property (nonatomic) struct CGPoint targetContentOffset;
@property (retain, nonatomic) NSDate *estimatedScrollEndDate;
@property (nonatomic, readonly) ISVisibilityOffsetHelper *visibilityOffsetHelper;
@property (nonatomic, readonly) _Bool canPerformVitality;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)removePlayerView:(id)arg1;
- (void)addPlayerView:(id)arg1;
- (void)didLayoutPlayerViews;
- (void)canPerformVitalityDidChange;
- (id)_newVitalityFilter;
- (void)_updateVitalityFilters;

@end
