/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@protocol PUBarsControllerDelegate;

@interface PUBarsController : NSObject

{
    struct {
        _Bool respondsToViewController;
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToContentGuideInsetsDidChange;
    } _delegateFlags;
    _Bool __needsUpdateBars;
    _Bool __needsUpdateGestureRecognizers;
    _Bool __needsUpdateContentGuideInsets;
    _Bool __isUpdateScheduled;
    id <PUBarsControllerDelegate> _delegate;
    long long __updateBarsDisabledCount;
    UIViewController *_viewController;
    struct UIEdgeInsets _contentGuideInsets;
}

@property (nonatomic, setter=_setNeedsUpdateBars:) _Bool _needsUpdateBars;
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers;
@property (nonatomic, setter=_setNeedsUpdateContentGuideInsets:) _Bool _needsUpdateContentGuideInsets;
@property (nonatomic, setter=_setUpdateScheduled:) _Bool _isUpdateScheduled;
@property (nonatomic, setter=_setUpdateBarsDisabledCount:) long long _updateBarsDisabledCount;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) struct UIEdgeInsets contentGuideInsets;
@property (weak, nonatomic) id <PUBarsControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool prefersStatusBarHidden;
@property (nonatomic, readonly) _Bool wantsNavigationBarVisible;
@property (nonatomic, readonly) _Bool wantsToolbarVisible;
@property (nonatomic, readonly) long long preferredBarStyle;

- (id)init;
- (_Bool)_needsUpdate;
- (void)updateIfNeeded;
- (void)_setNeedsUpdate;
- (void)invalidateBars;
- (void)_updateBarsIfNeeded;
- (void)updateBars;
- (void)_updateNowIfNeeded;
- (void)invalidateViewHostingGestureRecognizers;
- (void)invalidateViewControllerView;
- (_Bool)isLocationFromProviderInBarsArea:(id)arg1;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)updateContentGuideInsets;
- (void)_invalidateGestureRecognizers;
- (void)_updateGestureRecognizersIfNeeded;
- (void)invalidateContentGuideInsets;
- (void)_updateContentGuideInsetsIfNeeded;
- (_Bool)_isUpdateBarsDisabled;
- (void)disableUpdateBarsForDuration:(double)arg1;
- (void)_reenableUpdateBars;

@end
