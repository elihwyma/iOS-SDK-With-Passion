/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface BPSCheckMarkView : UIView

{
    _Bool _isChecked;
    UIImageView *_imageView;
}

@property (nonatomic) _Bool isChecked;
@property (retain, nonatomic) UIImageView *imageView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)uncheckedImage;
- (id)checkedImage;

@end
