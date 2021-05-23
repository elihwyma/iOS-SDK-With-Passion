/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVButton, NSString, UIColor, UIImage, UIView;

@interface AVControlItem : NSObject

{
    AVButton *_button;
    _Bool _enabled;
    long long _type;
    NSString *_title;
    UIImage *_image;
    CDUnknownBlockType _action;
    UIColor *_tintColor;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) UIView *view;
@property (copy, nonatomic) CDUnknownBlockType action;
@property (retain, nonatomic) UIColor *tintColor;

- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityAttributedHint:(id)arg1;
- (void)_updateTintColor;
- (id)initWithTitle:(id)arg1 type:(long long)arg2;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)_updateButton;

@end
