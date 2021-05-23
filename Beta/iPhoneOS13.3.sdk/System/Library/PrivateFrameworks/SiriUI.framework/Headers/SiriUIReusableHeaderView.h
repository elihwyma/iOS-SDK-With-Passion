/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UICollectionReusableView.h>

@class NSString, SiriUISnippetViewController, UIButton, UIColor, UIImageView, UILabel;

@interface SiriUIReusableHeaderView : UICollectionReusableView

{
    UILabel *_headerLabel;
    struct UIEdgeInsets _contentInsets;
    UIImageView *_chevronView;
    SiriUISnippetViewController *_snippetViewController;
    NSString *_titleText;
    UIColor *_titleTextColor;
    UIButton *_headerAreaButton;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (nonatomic, readonly) UIButton *headerAreaButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)desiredHeightForWidth:(double)arg1;
- (void)_configureHeaderLabelForBounds:(struct CGRect)arg1;

@end
