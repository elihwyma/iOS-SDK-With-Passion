/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UITableViewCell.h>

@class UIColor, UIView;

@interface TKPickerDividerTableViewCell : UITableViewCell

{
    UIView *_dividerView;
    long long _contentBackdropOverlayBlendMode;
}

@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (nonatomic) long long contentBackdropOverlayBlendMode;

- (void)layoutSubviews;
- (void)setSeparatorStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGRect)_dividerViewFrame;

@end
