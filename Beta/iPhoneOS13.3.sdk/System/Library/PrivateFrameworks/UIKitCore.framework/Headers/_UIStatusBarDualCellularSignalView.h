/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, NSString, UIAccessibilityHUDItem, _UIStatusBarCellularSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDualCellularSignalView : UIView

{
    _UIStatusBarCellularSignalView *_topSignalView;
    _UIStatusBarCellularSignalView *_bottomSignalView;
    long long _iconSize;
    NSLayoutConstraint *_verticalInterspaceConstraint;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (nonatomic) long long iconSize;
@property (retain, nonatomic) NSLayoutConstraint *verticalInterspaceConstraint;
@property (nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property (readonly) _UIStatusBarCellularSignalView *topSignalView;
@property (readonly) _UIStatusBarCellularSignalView *bottomSignalView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

+ (double)_interspaceForIconSize:(long long)arg1;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)viewForLastBaselineLayout;
- (void)applyStyleAttributes:(id)arg1;
- (void)_iconSizeDidChange;

@end
