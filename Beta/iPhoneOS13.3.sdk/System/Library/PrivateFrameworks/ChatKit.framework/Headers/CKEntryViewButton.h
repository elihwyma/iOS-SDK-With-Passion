/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UIButton, UIVisualEffectView;

@interface CKEntryViewButton : UIView

{
    BOOL _ckTintColor;
    _Bool _wantsVibrancy;
    UIButton *_button;
    long long _entryViewButtonType;
    UIVisualEffectView *_vibrancyView;
}

@property (nonatomic) long long entryViewButtonType;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (nonatomic) BOOL ckTintColor;
@property (nonatomic) _Bool wantsVibrancy;

+ (id)entryViewButtonImageForType:(long long)arg1;
+ (id)entryViewButtonOfType:(long long)arg1;
+ (id)entryViewButtonOfType:(long long)arg1 wantsVibrancy:(_Bool)arg2;
+ (id)imageNameForEntryViewButtonType:(long long)arg1;
+ (id)entryViewButtonImageWithName:(id)arg1 tintColor:(BOOL)arg2 shouldSuppressHairline:(_Bool)arg3;
+ (id)overlayImageForImageNamed:(id)arg1 tintColor:(BOOL)arg2;
+ (void)prewarmEntryViewButtons;
+ (id)entryViewButtonImageForType:(long long)arg1 color:(BOOL)arg2;

- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)layoutSubviews;
- (void)setDefaultImage;
- (void)setTintedImageForButtonType:(long long)arg1 tintColor:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 wantsVibrancy:(_Bool)arg2;

@end
