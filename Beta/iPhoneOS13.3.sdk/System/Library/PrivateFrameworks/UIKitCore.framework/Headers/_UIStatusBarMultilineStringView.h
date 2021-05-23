/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIAccessibilityHUDItem, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarMultilineStringView : UIView

{
    long long _numberOfLines;
    UIStackView *_stackView;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) long long numberOfLines;
@property (nonatomic, readonly) NSArray *stringViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)applyStyleAttributes:(id)arg1;

@end
