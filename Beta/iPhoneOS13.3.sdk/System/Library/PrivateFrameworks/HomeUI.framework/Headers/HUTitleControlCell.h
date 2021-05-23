/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUControlPanelCell.h>

@class NSString, UIView;

@protocol HUControlView;

@interface HUTitleControlCell : HUControlPanelCell

@property (copy, nonatomic) NSString *controlTitle;
@property (retain, nonatomic) UIView<HUControlView> *controlView;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)allControlViews;

@end
