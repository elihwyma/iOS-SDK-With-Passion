/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <WorkflowUI/WFActionCustomView.h>

@class NSString, UIStackView;

__attribute__((visibility("hidden")))
@interface WFHomeAccessoryActionView : WFActionCustomView

{
    UIStackView *_iconsStackView;
}

@property (retain, nonatomic) UIStackView *iconsStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeightForAction:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAction:(id)arg1;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)updateIcons;

@end
