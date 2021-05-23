/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UITableView.h>

@class NSMutableDictionary, UIView;

@interface MPAVClippingTableView : UITableView

{
    UIView *_headerBackgroundView;
    UIView *_footerBackgroundView;
    NSMutableDictionary *_sectionBackgroundViews;
}

@property (retain, nonatomic) NSMutableDictionary *sectionBackgroundViews;
@property (retain, nonatomic) UIView *headerBackgroundView;
@property (retain, nonatomic) UIView *footerBackgroundView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)backgroundViewForSection:(unsigned long long)arg1;
- (id)_createBackgroundView;

@end
