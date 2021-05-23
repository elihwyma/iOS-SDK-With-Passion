/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <AppSupportUI/NUIContainerStackView.h>

@interface TLKStackView : NUIContainerStackView

{
    _Bool _flipsToVerticalAxisForAccessibilityContentSizes;
    _Bool _isForcedToBeVertical;
}

@property (nonatomic) _Bool isForcedToBeVertical;
@property (nonatomic) _Bool flipsToVerticalAxisForAccessibilityContentSizes;

- (void)setAlignment:(long long)arg1;
- (void)setAxis:(long long)arg1;
- (void)addArrangedSubview:(id)arg1;

@end
