/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileController.h>

@class NSArray, NSTimer, UIView;

@interface PUTileViewController : PUTileController

{
    _Bool _contentViewEnabled;
    _Bool __loadingView;
    _Bool __edgeAntialiasingEnabled;
    _Bool _isReadyForDisplay;
    UIView *_contentView;
    UIView *_view;
    UIView *_loadedView;
    UIView *__tintView;
    UIView *__visibleRectView;
    CDUnknownBlockType __onReadyToDisplayBlock;
    NSTimer *__readinessTimer;
    UIView *__maskView;
    NSArray *_gestureRecognizers;
}

@property (retain, nonatomic, setter=_setView:) UIView *view;
@property (retain, nonatomic, setter=_setContentView:) UIView *contentView;
@property (retain, nonatomic, setter=_setLoadedView:) UIView *loadedView;
@property (nonatomic, getter=_isLoadingView, setter=_setLoadingView:) _Bool _loadingView;
@property (retain, nonatomic, setter=_setTintView:) UIView *_tintView;
@property (retain, nonatomic, setter=_setVisibleRectView:) UIView *_visibleRectView;
@property (copy, nonatomic, setter=_setOnReadyToDisplayBlock:) CDUnknownBlockType _onReadyToDisplayBlock;
@property (retain, nonatomic, setter=_setReadinessTimer:) NSTimer *_readinessTimer;
@property (nonatomic, setter=_setEdgeAntialiasingEnabled:) _Bool _edgeAntialiasingEnabled;
@property (retain, nonatomic, setter=_setMaskView:) UIView *_maskView;
@property (retain, nonatomic, setter=_setGestureRecognizers:) NSArray *gestureRecognizers;
@property (nonatomic, setter=_setReadyForDisplay:) _Bool isReadyForDisplay;
@property (nonatomic, readonly) _Bool isViewLoaded;
@property (nonatomic, getter=isContentViewEnabled) _Bool contentViewEnabled;
@property (nonatomic, readonly) UIView *originalView;

- (void)dealloc;
- (void)prepareForReuse;
- (struct CGRect)visibleRect;
- (id)loadView;
- (void)viewDidLoad;
- (void)removeAllAnimations;
- (void)setEdgeAntialiasingEnabled:(_Bool)arg1;
- (void)becomeReusable;
- (void)applyLayoutInfo:(id)arg1;
- (_Bool)wantsVisibleRectChanges;
- (void)didChangeVisibleRect;
- (void)addToTilingView:(id)arg1;
- (id)presentationLayoutInfo;
- (_Bool)isPresentationActive;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateDynamicStateDebugging;
- (void)_updateTintView;
- (void)_invalidateTintView;
- (void)_updateVisibleRectView;
- (void)_handleReadinessForced:(_Bool)arg1;

@end
