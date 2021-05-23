/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPSAbridgableLabel, UIImageView;

@interface CPSVoiceView : UIView

{
    CPSAbridgableLabel *_titleLabel;
    UIImageView *_imageView;
}

@property (retain, nonatomic) CPSAbridgableLabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_titleFont;

@end
