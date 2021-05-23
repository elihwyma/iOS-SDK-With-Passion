/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIToolbar.h>

@class NSArray, NSMutableSet, NSString, PUToolbarViewModel, UIView;

__attribute__((visibility("hidden")))
@interface PUExtendedToolbar : UIToolbar

{
    _Bool __isUpdating;
    _Bool __needsUpdateToolbarItems;
    _Bool __needsUpdateAccessoryView;
    _Bool __needsUpdateAccessoryViewTopOutset;
    _Bool __needsUpdateContainedToolbar;
    _Bool __needsUpdateAccessoryViewContainer;
    PUToolbarViewModel *_toolbarViewModel;
    long long __numberOfNestedChanges;
    NSArray *__toolbarItems;
    UIView *__accessoryView;
    double __containedToolbarHeight;
    double __accessoryViewTopOutset;
    double __minimumBackgroundHeight;
    UIToolbar *__containedToolbar;
    UIView *__accessoryViewContainer;
    NSMutableSet *__accessoryViewContainers;
}

@property (nonatomic, setter=_setNumberOfNestedChanges:) long long _numberOfNestedChanges;
@property (nonatomic, setter=_setUpdating:) _Bool _isUpdating;
@property (nonatomic, setter=_setNeedsUpdateToolbarItems:) _Bool _needsUpdateToolbarItems;
@property (nonatomic, setter=_setNeedsUpdateAccessoryView:) _Bool _needsUpdateAccessoryView;
@property (nonatomic, setter=_setNeedsUpdateAccessoryViewTopOutset:) _Bool _needsUpdateAccessoryViewTopOutset;
@property (nonatomic, setter=_setNeedsUpdateContainedToolbar:) _Bool _needsUpdateContainedToolbar;
@property (nonatomic, setter=_setNeedsUpdateAccessoryViewContainer:) _Bool _needsUpdateAccessoryViewContainer;
@property (copy, nonatomic, setter=_setToolbarItems:) NSArray *_toolbarItems;
@property (retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView;
@property (nonatomic, setter=_setContainedToolbarHeight:) double _containedToolbarHeight;
@property (nonatomic, setter=_setAccessoryViewTopOutset:) double _accessoryViewTopOutset;
@property (nonatomic, setter=_setMinimumBackgroundHeight:) double _minimumBackgroundHeight;
@property (retain, nonatomic, setter=_setContainedToolbar:) UIToolbar *_containedToolbar;
@property (retain, nonatomic, setter=_setAccessoryViewContainer:) UIView *_accessoryViewContainer;
@property (nonatomic, readonly) NSMutableSet *_accessoryViewContainers;
@property (retain, nonatomic) PUToolbarViewModel *toolbarViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_shouldStretchDuringCrossfadeTransition;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_invalidateSize;
- (void)_invalidateToolbarItems;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)setToolbarViewModel:(id)arg1 withAnimatorBlock:(CDUnknownBlockType)arg2;
- (void)_getContainedToolbarFrame:(struct CGRect *)arg1 accessoryViewContainerFrame:(struct CGRect *)arg2 forBounds:(struct CGRect)arg3;
- (void)_performChanges:(CDUnknownBlockType)arg1 withAnimatorBlock:(CDUnknownBlockType)arg2;
- (void)_updateIfNeededWithAnimatorBlock:(CDUnknownBlockType)arg1;
- (void)_updateToolbarItemsIfNeeded;
- (void)_invalidateAccessoryView;
- (void)_updateAccessoryViewIfNeeded;
- (void)_invalidateAccessoryViewTopOutset;
- (void)_updateAccessoryTopOutsetViewIfNeeded;
- (void)_invalidateContainedToolbar;
- (void)_invalidateAccessoryViewContainer;
- (void)_updateViewsIfNeededWithAnimatorBlock:(CDUnknownBlockType)arg1;

@end
