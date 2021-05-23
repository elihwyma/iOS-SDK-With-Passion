/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotosGlobalHeaderView : UICollectionReusableView

{
    UILabel *_titleLabel;
    UIView *_separatorView;
    NSString *_title;
}

@property (copy, nonatomic) NSString *title;

+ (id)_newTitleLabel;
+ (struct CGSize)_instanceLayoutSubviews:(id)arg1 forTitle:(id)arg2 inBounds:(struct CGRect)arg3;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forTitle:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
