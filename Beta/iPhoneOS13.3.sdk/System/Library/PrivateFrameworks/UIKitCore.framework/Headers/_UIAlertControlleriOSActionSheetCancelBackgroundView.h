/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAlertControlleriOSActionSheetCancelBackgroundView : UIView

{
    UIView *backgroundView;
    UIView *highlightBackgroundView;
    UIView *highlightView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setPressed:(_Bool)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;

@end
