/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SKUIGroupedHeaderView : UIView

{
    UILabel *_titleLabel;
    UIView *_topBorder;
    UIView *_botBorder;
}

@property (nonatomic) _Bool hasTopBorder;
@property (nonatomic) _Bool hasBottomBorder;
@property (copy, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
