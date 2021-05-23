/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIAlertControlleriOSActionSheetCancelBackgroundView.h>

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIActionSheetiOSDismissActionView : _UIAlertControlleriOSActionSheetCancelBackgroundView

{
    _Bool _usesShortCompactVerticalLayout;
    UIButton *_dismissButton;
}

@property (retain, nonatomic) UIButton *dismissButton;
@property (nonatomic) _Bool usesShortCompactVerticalLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithContinuousCornerRadius:(double)arg1;
- (void)_setupDismissButton;
- (double)_heightForTraitCollection:(id)arg1;

@end
