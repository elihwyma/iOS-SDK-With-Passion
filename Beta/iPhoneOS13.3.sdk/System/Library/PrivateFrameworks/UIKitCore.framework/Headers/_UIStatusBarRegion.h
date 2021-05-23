/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSMutableIndexSet, NSOrderedSet, NSSet, NSString, UILayoutGuide, UIView, _UIStatusBar, _UIStatusBarAction, _UIStatusBarDisplayItem, _UIStatusBarStyleAttributes;

@protocol UILayoutItem, _UIStatusBarRegionLayout;

@interface _UIStatusBarRegion : NSObject

{
    _Bool _offsetable;
    _UIStatusBarAction *_action;
    NSString *_identifier;
    _UIStatusBar *_statusBar;
    id <_UIStatusBarRegionLayout> _layout;
    NSSet *_dependentRegionIdentifiers;
    _UIStatusBarRegion *_enabilityRegion;
    double _alpha;
    long long _overriddenStyle;
    _UIStatusBarStyleAttributes *_overriddenStyleAttributes;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_highlightView;
    NSOrderedSet *_displayItems;
    NSMutableIndexSet *_disablingTokens;
    UILayoutGuide *_layoutGuide;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    UIView *_containerView;
    UIView *_frozenView;
    struct UIOffset _offset;
    struct UIEdgeInsets _actionInsets;
}

@property (retain, nonatomic) NSMutableIndexSet *disablingTokens;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *centerXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint;
@property (nonatomic, readonly) UIView *containerView;
@property (retain, nonatomic) UIView *frozenView;
@property (nonatomic, readonly) NSArray *enabledDisplayItems;
@property (nonatomic, readonly) NSArray *currentEnabledDisplayItems;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (nonatomic, readonly) id <UILayoutItem> layoutItem;
@property (nonatomic, readonly) id <UILayoutItem> containerItem;
@property (retain, nonatomic) id <_UIStatusBarRegionLayout> layout;
@property (retain, nonatomic) NSSet *dependentRegionIdentifiers;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (weak, nonatomic) _UIStatusBarRegion *enabilityRegion;
@property (nonatomic) _Bool offsetable;
@property (nonatomic) struct UIOffset offset;
@property (nonatomic, getter=isFrozen) _Bool frozen;
@property (nonatomic) double alpha;
@property (nonatomic) long long overriddenStyle;
@property (retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) NSOrderedSet *displayItems;
@property (nonatomic, readonly) _UIStatusBarDisplayItem *overflowedDisplayItem;
@property (copy, nonatomic, readonly) NSDictionary *displayItemAbsoluteFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UIStatusBarAction *action;
@property (nonatomic) struct UIEdgeInsets actionInsets;

- (void)setIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)disableWithToken:(unsigned long long)arg1;
- (void)enableWithToken:(unsigned long long)arg1;
- (id)displayItemForHUDAtLocation:(struct CGPoint)arg1;
- (void)_addSubview:(id)arg1 atBack:(_Bool)arg2;
- (void)_overriddenStyleAttributesChanged;

@end
