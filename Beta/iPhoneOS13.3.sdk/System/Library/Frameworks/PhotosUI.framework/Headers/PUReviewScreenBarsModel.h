/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

@class NSDictionary, NSSet, UIView;

@interface PUReviewScreenBarsModel : PXObservable

{
    _Bool _shouldPlaceScrubberInScrubberBar;
    _Bool _transitioningWithCamera;
    _Bool _lastControlAlignmentChangeForcedLayout;
    _Bool _useVerticalControlLayout;
    _Bool __needsUpdateAvailableControls;
    NSDictionary *_availableItemsByIdentifier;
    NSSet *_availableControls;
    NSSet *_enabledControls;
    UIView *_accessoryView;
    struct CGPoint _controlCenterAlignmentPoint;
}

@property (nonatomic, setter=_setNeedsUpdateAvailableControls:) _Bool _needsUpdateAvailableControls;
@property (retain, nonatomic, setter=_setAvailableControls:) NSSet *availableControls;
@property (retain, nonatomic, setter=_setEnabledControls:) NSSet *enabledControls;
@property (copy, nonatomic, readonly) NSDictionary *availableItemsByIdentifier;
@property (nonatomic, readonly) _Bool shouldPlaceScrubberInScrubberBar;
@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic, readonly, getter=isTransitioningWithCamera) _Bool transitioningWithCamera;
@property (nonatomic, readonly) struct CGPoint controlCenterAlignmentPoint;
@property (nonatomic, readonly) _Bool lastControlAlignmentChangeForcedLayout;
@property (nonatomic, readonly) _Bool useVerticalControlLayout;

- (void)setAccessoryView:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)setShouldPlaceScrubberInScrubberBar:(_Bool)arg1;
- (void)setControlCenterAlignmentPoint:(struct CGPoint)arg1 forceLayout:(_Bool)arg2;
- (void)setAvailableItemsByIdentifier:(id)arg1;
- (void)setTransitioningWithCamera:(_Bool)arg1;
- (void)setUseVerticalControlLayout:(_Bool)arg1;
- (void)setControlCenterAlignmentPoint:(struct CGPoint)arg1;
- (void)invokeCallbackForBarButtonItemWithIdentifier:(long long)arg1;
- (void)_updateAvailableControls;

@end
