/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIVisualEffectView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface DOCVisualEffectLabel : UIVisualEffectView

{
    UILabel *_label;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) _Bool adjustsFontForContentSizeCategory;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UILabel *label;

- (struct CGSize)intrinsicContentSize;
- (id)initWithEffect:(id)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)viewForLastBaselineLayout;

@end
