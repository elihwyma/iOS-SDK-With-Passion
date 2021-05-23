/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIAccessibilityHUDItem, UILabel;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBadgeView : UIView

{
    UILabel *_label;
    NSArray *_constraintsWithConstant;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSArray *constraintsWithConstant;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)viewForLastBaselineLayout;
- (void)applyStyleAttributes:(id)arg1;

@end
