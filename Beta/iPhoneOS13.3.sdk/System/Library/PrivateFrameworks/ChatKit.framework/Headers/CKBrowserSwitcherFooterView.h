/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

#import <ChatKit/Swift-Protocol.h>

@class CKAppStripLayout, NSString, NSTimer, UICollectionView, UILongPressGestureRecognizer;

@protocol CKAppStripPredictiveTypeTransition, CKBrowserSwitcherFooterViewDataSource, CKBrowserSwitcherFooterViewDelegate;

@interface CKBrowserSwitcherFooterView : UIView <Swift>

{
    CKAppStripLayout *_appStripLayout;
    UICollectionView *_collectionView;
    UIView *_predictiveTypeSnapshotView;
    UIView *_visibleView;
    id <CKAppStripPredictiveTypeTransition> _animator;
    struct UIEdgeInsets _minifiedContentInsets;
    _Bool _isMagnified;
    _Bool _isDoingMagnificationAnimation;
    _Bool _isMagnificationEnabled;
    _Bool _ignoreDataSourceChanges;
    NSTimer *_minificationTimer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UILongPressGestureRecognizer *_touchTracker;
    _Bool _hasTouches;
    _Bool _scrollsLastUsedAppIconIntoView;
    _Bool _hideShinyStatus;
    _Bool _toggleBordersOnInterfaceStyle;
    _Bool _minifiesOnSelection;
    _Bool _isMinifyingOnTranscriptScroll;
    id <CKBrowserSwitcherFooterViewDelegate> _delegate;
    id <CKBrowserSwitcherFooterViewDataSource> _dataSource;
    double _snapshotVerticalOffset;
    UIView *_grayLine;
}

@property (retain, nonatomic) UIView *grayLine;
@property (weak, nonatomic) id <CKBrowserSwitcherFooterViewDelegate> delegate;
@property (weak, nonatomic) id <CKBrowserSwitcherFooterViewDataSource> dataSource;
@property (nonatomic) _Bool isMagnified;
@property (nonatomic) _Bool scrollsLastUsedAppIconIntoView;
@property (nonatomic) _Bool hideShinyStatus;
@property (nonatomic) _Bool showBorders;
@property (nonatomic) _Bool toggleBordersOnInterfaceStyle;
@property (retain, nonatomic) CKAppStripLayout *appStripLayout;
@property (nonatomic) _Bool minifiesOnSelection;
@property (nonatomic) _Bool isMinifyingOnTranscriptScroll;
@property (nonatomic) double snapshotVerticalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)collectionView;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)clearSelection;
- (void)_updateVisibilityState;
- (void)resetScrollPosition;
- (double)contentHeight;
- (void)updatePredictiveTypeSnapshot:(id)arg1;
- (void)animateAppStripVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)minifyImmediately:(_Bool)arg1;
- (void)selectPluginAtIndexPath:(id)arg1;
- (void)appsLongPressed:(id)arg1;
- (void)touchTrackerTrackedTouches:(id)arg1;
- (void)visibleAppsChanges:(id)arg1;
- (void)updateCollectionView:(id)arg1;
- (void)installedAppsChanged:(id)arg1;
- (void)updateBrowserCell:(id)arg1;
- (void)transcriptCollectionStartedScrolling:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 toggleBordersOnInterfaceStyle:(_Bool)arg2;
- (struct UIEdgeInsets)insetsForAppStrip;
- (void)adjustMagnificationAtPoint:(struct CGPoint)arg1 minifyImmediately:(_Bool)arg2;
- (struct CGPoint)targetContentOffsetForFocusPoint:(struct CGPoint)arg1 initialLayoutMode:(unsigned long long)arg2 finalLayoutMode:(unsigned long long)arg3;
- (void)setInitiallySelectedPluginIfNeeded;

@end
