/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@class NSString, UIColor, UIImage, _UILegibilitySettings;

@protocol SBLockScreenModalViewDelegate;

@protocol SBLockScreenModalView <Swift>

@property (weak, nonatomic) id <SBLockScreenModalViewDelegate> delegate;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *secondarySubtitleText;
@property (copy, nonatomic) NSString *primaryActionButtonText;
@property (retain, nonatomic) UIColor *primaryActionButtonBackgroundColor;
@property (copy, nonatomic) NSString *secondaryActionButtonText;
@property (copy, nonatomic) UIColor *secondaryActionButtonTextColor;
@property (copy, nonatomic) NSString *footerText;
@property (retain, nonatomic) UIImage *image;

@end
