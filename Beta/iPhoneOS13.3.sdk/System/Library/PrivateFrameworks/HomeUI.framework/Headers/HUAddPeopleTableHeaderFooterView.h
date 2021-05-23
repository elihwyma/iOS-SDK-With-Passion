/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIView;

@interface HUAddPeopleTableHeaderFooterView : UITableViewHeaderFooterView

{
    _Bool _needsTopBorder;
    _Bool _needsBottomBorder;
    UIView *_topBorder;
    UIView *_bottomBorder;
}

@property (retain, nonatomic) UIView *topBorder;
@property (retain, nonatomic) UIView *bottomBorder;
@property (nonatomic) _Bool needsTopBorder;
@property (nonatomic) _Bool needsBottomBorder;

+ (id)identifier;
+ (double)preferredHeight;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end
