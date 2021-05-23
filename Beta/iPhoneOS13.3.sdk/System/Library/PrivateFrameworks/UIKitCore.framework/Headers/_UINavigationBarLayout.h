/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, UILabel, UISearchBar, UIView, _UIBarBackground, _UIBarBackgroundLayout, _UIBarInsertLayoutData, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarModernPromptView, _UINavigationBarPalette, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLayout : NSObject <Swift>

{
    _UIBarInsertLayoutData *_promptLayoutData;
    _UIBarInsertLayoutData *_contentLayoutData;
    _UIBarInsertLayoutData *_canvasViewLayoutData;
    _UIBarInsertLayoutData *_largeTitleLayoutData;
    _UIBarInsertLayoutData *_refreshControlLayoutData;
    _UIBarInsertLayoutData *_searchBarLayoutData;
    _UIBarInsertLayoutData *_scopeBarLayoutData;
    _UIBarInsertLayoutData *_bottomPaletteLayoutData;
    NSMutableArray *_priorityOrderedLayout;
    NSMutableArray *_stackingOrderedLayout;
    NSArray *_restingHeights;
    _Bool _backgroundCoversContentOnly;
    _Bool _clientWantsBackgroundHidden;
    _Bool _useManualScrollEdgeAppearance;
    _Bool _clientWantsToPreserveSearchBarAcrossTransitions;
    _Bool _hidesSearchBarWhenScrolling;
    _UINavigationBarModernPromptView *_promptView;
    _UINavigationBarContentView *_contentView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarContentViewLayout *_contentViewLayout;
    _UINavigationBarLargeTitleViewLayout *_largeTitleViewLayout;
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_compactBackgroundViewLayout;
    _UIBarBackgroundLayout *_standardBackgroundViewLayout;
    double _backgroundExtension;
    double _requestedBackgroundViewAlpha;
    double _manualScrollEdgeAppearanceProgress;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
    UILabel *_weeTitleLabel;
    UIView *_canvasView;
    UISearchBar *_searchBar;
    long long _representedSearchLayoutState;
    _UINavigationBarPalette *_bottomPalette;
    double _largeTitleExposure;
    double _chromelessTransitionProgress;
    double _computedBackgroundViewAlpha;
    long long _apiVersion;
    struct CGSize _layoutSize;
    struct NSDirectionalEdgeInsets _largeTitleViewInsets;
}

@property (retain, nonatomic) _UINavigationBarModernPromptView *promptView;
@property (retain, nonatomic) _UINavigationBarContentView *contentView;
@property (retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView;
@property (nonatomic) struct NSDirectionalEdgeInsets largeTitleViewInsets;
@property (retain, nonatomic) _UINavigationBarContentViewLayout *contentViewLayout;
@property (retain, nonatomic) _UINavigationBarLargeTitleViewLayout *largeTitleViewLayout;
@property (retain, nonatomic) _UIBarBackground *backgroundView;
@property (retain, nonatomic) _UIBarBackgroundLayout *compactBackgroundViewLayout;
@property (retain, nonatomic) _UIBarBackgroundLayout *standardBackgroundViewLayout;
@property (nonatomic) double backgroundExtension;
@property (nonatomic) _Bool backgroundCoversContentOnly;
@property (nonatomic) double requestedBackgroundViewAlpha;
@property (nonatomic) _Bool clientWantsBackgroundHidden;
@property (nonatomic) _Bool useManualScrollEdgeAppearance;
@property (nonatomic) double manualScrollEdgeAppearanceProgress;
@property (retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (retain, nonatomic) UILabel *weeTitleLabel;
@property (retain, nonatomic) UIView *canvasView;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (nonatomic) _Bool clientWantsToPreserveSearchBarAcrossTransitions;
@property (nonatomic) _Bool hidesSearchBarWhenScrolling;
@property (nonatomic) long long representedSearchLayoutState;
@property (retain, nonatomic) _UINavigationBarPalette *bottomPalette;
@property (nonatomic, readonly) double largeTitleExposure;
@property (nonatomic, readonly) double chromelessTransitionProgress;
@property (nonatomic, readonly) double computedBackgroundViewAlpha;
@property (nonatomic) long long apiVersion;
@property (nonatomic) struct CGSize layoutSize;
@property (copy, nonatomic, readonly) NSArray *restingHeights;
@property (nonatomic, readonly) CDStruct_39925896 layoutHeights;
@property (nonatomic, readonly) struct CGRect promptViewLayoutFrame;
@property (nonatomic, readonly) struct CGRect contentViewLayoutFrame;
@property (nonatomic, readonly) struct CGRect refreshControlLayoutFrame;
@property (nonatomic, readonly) struct CGRect largeTitleViewLayoutFrame;
@property (nonatomic, readonly) struct CGRect backgroundViewLayoutFrame;
@property (nonatomic, readonly) struct CGRect weeTitleLabelLayoutFrame;
@property (nonatomic, readonly) struct CGRect canvasViewLayoutFrame;
@property (nonatomic, readonly) struct CGRect searchBarLayoutFrame;
@property (nonatomic, readonly) struct CGRect bottomPaletteLayoutFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)recordFromStateForTransition:(id)arg1;
- (void)prepareToRecordToState:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (void)finalizeStateFromTransition:(id)arg1;
- (void)layoutViews;
- (void)_addLayoutItem:(id)arg1;
- (void)_resolveContentAndCanvasLayouts;
- (id)initWithLayout:(id)arg1;
- (void)_removeLayoutItem:(id)arg1;
- (void)_updateLargeTitleViewLayoutItem;
- (void)_updateLayoutOutputs;
- (void)_updateRefreshControlLayoutData;
- (void)_reprioritizeLayoutItem:(id)arg1 toPriority:(long long)arg2;
- (void)updateLayout;
- (void)_updateLayoutParametersForWidth:(double)arg1;
- (struct CGRect)_contentViewLayoutFrameWithPromptMaxY:(double)arg1;
- (struct CGRect)_canvasViewLayoutFrameWithPromptMaxY:(double)arg1;
- (struct CGRect)_refreshControlLayoutFrameWithContentOrCanvasMaxY:(double)arg1;
- (struct CGRect)_largeTitleViewLayoutFrameWithContentOrCanvasOrRefreshControlMaxY:(double)arg1;
- (struct CGRect)_searchBarLayoutFrameWithLargeTitleMaxY:(double)arg1;
- (struct CGRect)_bottomPaletteLayoutFrameWithSearchBarMaxY:(double)arg1;
- (struct CGRect)backgroundViewLayoutFrameForcingExpandedHeight:(_Bool)arg1;
- (struct CGRect)_backgroundViewLayoutFrameWithRelevantMaxY:(double)arg1;
- (void)installViewsInNavigationBar:(id)arg1;
- (void)interleaveViewsWithLayout:(id)arg1 inNavigationBar:(id)arg2;
- (void)removeAllViews;
- (void)removeViewsNotInLayout:(id)arg1;
- (id)layoutForMeasuringWidth:(double)arg1;

@end
