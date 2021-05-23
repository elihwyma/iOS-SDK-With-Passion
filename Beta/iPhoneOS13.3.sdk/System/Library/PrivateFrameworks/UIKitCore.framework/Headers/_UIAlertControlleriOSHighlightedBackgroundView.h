/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIAlertControlleriOSHighlightedBackgroundView : UIView

{
    UIVisualEffectView *_effectView;
    long long _style;
}

@property (nonatomic, readonly) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setPressed:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)_configureWithStyle:(long long)arg1;

@end
