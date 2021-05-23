/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SLSheetTitleView : UIView

{
    UIImageView *_serviceIconView;
    NSMutableArray *_constraints;
    UILabel *_titleLabel;
    NSString *_title;
}

@property (copy, nonatomic) NSString *title;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)updateConstraints;
- (void)setServiceIconImage:(id)arg1;
- (void)_setupTitleLabel;

@end
