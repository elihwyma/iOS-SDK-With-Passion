/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSAttributedString, UIColor, UILabel;

@interface REUpNextHeaderView : UICollectionReusableView

{
    UILabel *_label;
    NSAttributedString *_attributedText;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIColor *textColor;

+ (void)initialize;

- (id)initWithFrame:(struct CGRect)arg1;

@end
