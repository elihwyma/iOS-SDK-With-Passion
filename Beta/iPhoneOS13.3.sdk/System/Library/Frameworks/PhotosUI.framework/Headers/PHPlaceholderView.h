/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface PHPlaceholderView : UIView

{
    long long _type;
    UIView *__container;
    UIImageView *__imageView;
    UILabel *__airPlayLabel;
    UILabel *__appleTVMessageLabel;
}

@property (retain, nonatomic, setter=_setContainer:) UIView *_container;
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;
@property (retain, nonatomic, setter=_setAirPlayLabel:) UILabel *_airPlayLabel;
@property (retain, nonatomic, setter=_setAppleTVMessageLabel:) UILabel *_appleTVMessageLabel;
@property (nonatomic, readonly) long long type;

- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_appleTVMessage;

@end
