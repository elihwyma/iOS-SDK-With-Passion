/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingInstructionsView : UIView

{
    struct UIEdgeInsets _contentInset;
    long long _contentPosition;
    UILabel *_explanationLabel;
    NSMutableArray *_labelsStack;
    UILabel *_titleLabel;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) UILabel *explanationLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) long long contentPosition;

+ (id)titleAttributedStringWithString:(id)arg1;
+ (id)explanationAttributedStringWithString:(id)arg1;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_newExplanationLabel;
- (void)pushLabelState;
- (void)popLabelState;
- (id)_newTitleLabel;
- (void)setContentPosition:(long long)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
