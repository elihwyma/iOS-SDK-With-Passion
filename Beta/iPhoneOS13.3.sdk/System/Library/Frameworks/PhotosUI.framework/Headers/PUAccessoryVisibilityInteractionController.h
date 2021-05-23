/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUAssetViewModel, PUBrowsingSession, PUChangeDirectionValueFilter, PXNumberAnimator, PXVerticalSwipeGestureRecognizerHelper, UIPanGestureRecognizer;

@protocol PUAccessoryVisibilityInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUAccessoryVisibilityInteractionController : NSObject <Swift>

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    _Bool _isUpdateScheduled;
    struct {
        _Bool contentOffset;
    } _needsUpdateFlags;
    struct {
        _Bool respondsToCanBeginAtLocationFromProvider;
        _Bool respondsToDidEnd;
        _Bool respondsToIsLocationFromProviderInAccessoryContent;
        _Bool respondsToSetAccessoryVisibleChangeReason;
    } _delegateFlags;
    id <PUAccessoryVisibilityInteractionControllerDelegate> _delegate;
    PUBrowsingSession *_browsingSession;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PUAssetViewModel *__assetViewModel;
    PXNumberAnimator *__overridingContentOffsetY;
    PXNumberAnimator *__contentOffsetOverrideFactor;
    PUChangeDirectionValueFilter *__verticalDirectionValueFilter;
    PUChangeDirectionValueFilter *__swipeDirectionValueFilter;
    PXVerticalSwipeGestureRecognizerHelper *_verticalSwipeGestureRecognizerHelper;
    struct CGPoint __initialContentOffset;
}

@property (retain, nonatomic, setter=_setAssetViewModel:) PUAssetViewModel *_assetViewModel;
@property (nonatomic, setter=_setInitialContentOffset:) struct CGPoint _initialContentOffset;
@property (retain, nonatomic, setter=_setOverridingContentOffsetY:) PXNumberAnimator *_overridingContentOffsetY;
@property (retain, nonatomic, setter=_setContentOffsetOverrideFactor:) PXNumberAnimator *_contentOffsetOverrideFactor;
@property (retain, nonatomic, setter=_setVerticalDirectionValueFilter:) PUChangeDirectionValueFilter *_verticalDirectionValueFilter;
@property (retain, nonatomic, setter=_setSwipeDirectionValueFilter:) PUChangeDirectionValueFilter *_swipeDirectionValueFilter;
@property (nonatomic, readonly) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognizerHelper;
@property (weak, nonatomic) id <PUAccessoryVisibilityInteractionControllerDelegate> delegate;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleScheduledUpdate;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)invalidateViewHostingGestureRecognizers;
- (void)_updateGestureRecognizers;
- (void)_setAccessoryVisible:(_Bool)arg1;
- (id)_currentAssetViewModel;
- (void)_invalidateContentOffset;
- (void)_updateContentOffsetIfNeeded;

@end
