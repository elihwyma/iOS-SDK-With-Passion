/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIView, _UIStatusBarAction, _UIStatusBarDisplayItemPlacement, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarRegion, _UIStatusBarStyleAttributes;

@protocol UILayoutItem, _UIStatusBarDisplayable;

@interface _UIStatusBarDisplayItem : NSObject

{
    _Bool _enabled;
    _Bool _background;
    _Bool _floating;
    _Bool _needsAddingToLayout;
    UIView<_UIStatusBarDisplayable> *_view;
    _UIStatusBarAction *_action;
    _UIStatusBarIdentifier *_identifier;
    _UIStatusBarItem *_item;
    UIView *_highlightView;
    double _alpha;
    double _viewAlpha;
    double _baselineOffset;
    _UIStatusBarStyleAttributes *_overriddenStyleAttributes;
    long long _overriddenVerticalAlignment;
    _UIStatusBarRegion *_region;
    UIView *_containerView;
    id <UILayoutItem> _layoutItem;
    _UIStatusBarDisplayItemPlacement *_placement;
    struct UIEdgeInsets _actionInsets;
    struct CGAffineTransform _transform;
    struct CGAffineTransform _viewTransform;
}

@property (retain, nonatomic) id <UILayoutItem> layoutItem;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) _Bool needsAddingToLayout;
@property (copy, nonatomic, readonly) _UIStatusBarIdentifier *identifier;
@property (weak, nonatomic, readonly) _UIStatusBarItem *item;
@property (nonatomic, readonly) id <_UIStatusBarDisplayable> displayable;
@property (nonatomic, readonly) UIView<_UIStatusBarDisplayable> *view;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) _Bool visible;
@property (nonatomic, getter=isBackground) _Bool background;
@property (nonatomic) double alpha;
@property (nonatomic) double viewAlpha;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) struct CGAffineTransform viewTransform;
@property (nonatomic) struct CGRect absoluteFrame;
@property (nonatomic) double baselineOffset;
@property (retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (nonatomic) long long overriddenVerticalAlignment;
@property (weak, nonatomic) _UIStatusBarRegion *region;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) _Bool floating;
@property (nonatomic, readonly) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UIStatusBarAction *action;
@property (nonatomic) struct UIEdgeInsets actionInsets;

- (void)applyStyleAttributes:(id)arg1;
- (void)_updateComputedAlpha;
- (void)_updateComputedTransform;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;

@end
