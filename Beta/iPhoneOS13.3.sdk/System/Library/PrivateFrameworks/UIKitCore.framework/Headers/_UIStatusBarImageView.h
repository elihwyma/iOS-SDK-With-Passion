/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageView.h>

@class NSString, UIAccessibilityHUDItem, UIImage;

@interface _UIStatusBarImageView : UIImageView

{
    _Bool _useDisabledAppearanceForAccessibilityHUD;
    long long _fontStyle;
    UIImage *_accessibilityHUDImage;
    double _iconScale;
}

@property (nonatomic) double iconScale;
@property (nonatomic) long long fontStyle;
@property (nonatomic) _Bool useDisabledAppearanceForAccessibilityHUD;
@property (retain, nonatomic) UIImage *accessibilityHUDImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyStyleAttributes:(id)arg1;

@end
