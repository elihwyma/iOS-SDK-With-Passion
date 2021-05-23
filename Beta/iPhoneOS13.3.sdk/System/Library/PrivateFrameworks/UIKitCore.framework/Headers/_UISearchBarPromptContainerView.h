/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UISearchBarPromptContainerView : UIView

{
    long long _barMetrics;
    UILabel *_promptLabel;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) long long barMetrics;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (retain, nonatomic) UILabel *promptLabel;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)useMini;
- (_Bool)_isKnownUISearchBarComponentContainer;

@end
