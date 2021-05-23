/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIActivityIndicatorView.h>

@class NSString, UIAccessibilityHUDItem;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityIndicator : UIActivityIndicatorView

{
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

- (void)applyStyleAttributes:(id)arg1;

@end
