/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class EKUIDividedGridViewController, UIView;

@interface EKUIDividedGridViewTableViewCell : UITableViewCell

{
    EKUIDividedGridViewController *_gridViewController;
    UIView *_topDivider;
    UIView *_bottomDivider;
}

@property (retain) EKUIDividedGridViewController *gridViewController;
@property (retain, nonatomic) UIView *topDivider;
@property (retain, nonatomic) UIView *bottomDivider;
@property (nonatomic) _Bool drawsTopDivider;

- (void)layoutSubviews;
- (struct CGRect)_separatorFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 gridViewType:(long long)arg3 buttonTitles:(id)arg4 cellBackgroundColor:(id)arg5;
- (_Bool)wantsDrawBackground;
- (_Bool)_isWiderThanMaximum;
- (void)setDrawBottomDivider:(_Bool)arg1;
- (_Bool)drawBottomDivider;

@end
