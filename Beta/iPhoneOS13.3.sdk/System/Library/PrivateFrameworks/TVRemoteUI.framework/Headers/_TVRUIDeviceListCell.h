/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UITableViewCell.h>

@class UIView;

@protocol TVRUIDevice, TVRUIStyleProvider;

@interface _TVRUIDeviceListCell : UITableViewCell

{
    _Bool _showSeparator;
    id <TVRUIDevice> _device;
    id <TVRUIStyleProvider> _styleProvider;
    UIView *_separator;
}

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) id <TVRUIDevice> device;
@property (nonatomic) _Bool showSeparator;
@property (retain, nonatomic) id <TVRUIStyleProvider> styleProvider;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_applyFilterForDevice:(id)arg1;

@end
