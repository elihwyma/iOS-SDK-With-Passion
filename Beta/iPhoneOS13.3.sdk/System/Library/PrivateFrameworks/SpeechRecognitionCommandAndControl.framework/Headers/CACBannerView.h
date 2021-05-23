/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface CACBannerView : UIView

{
    NSString *_symbolImage;
    NSLayoutConstraint *_imageToTextConstraint;
    UILabel *_textLabel;
    UIImageView *_accessoryImageView;
    UIView *_baseView;
}

@property (retain, nonatomic) NSLayoutConstraint *imageToTextConstraint;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *accessoryImageView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *symbolImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
