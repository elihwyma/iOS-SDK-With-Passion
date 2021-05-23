/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImpactFeedbackGenerator;

@protocol UISwitchControl;

__attribute__((visibility("hidden")))
@interface UISwitchVisualElement : UIView

{
    _Bool _enabled;
    id <UISwitchControl> _switchControl;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    double _enabledAlpha;
}

@property (nonatomic) double enabledAlpha;
@property (nonatomic) _Bool enabled;
@property (weak, nonatomic) id <UISwitchControl> switchControl;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;

+ (struct CGSize)preferredContentSize;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredContentSize;
- (void)setTintColor:(id)arg1;
- (void)tintColorDidChange;
- (void)setThumbTintColor:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setOnImage:(id)arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowsOnOffLabel:(_Bool)arg1;

@end
