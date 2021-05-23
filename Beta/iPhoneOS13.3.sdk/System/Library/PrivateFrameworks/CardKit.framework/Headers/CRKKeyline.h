/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <UIKit/UIView.h>

@interface CRKKeyline : UIView

{
    UIView *_keylineView;
    long long _type;
    long long _direction;
    unsigned long long _visualEffectStyle;
}

@property (readonly) long long type;
@property (readonly) long long direction;
@property (readonly) unsigned long long visualEffectStyle;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithType:(long long)arg1 direction:(long long)arg2 visualEffectStyle:(unsigned long long)arg3;
- (id)_keylineColorForVisualEffectStyle:(unsigned long long)arg1;
- (double)_roundedKeylineThickness;
- (double)defaultKeylineInsetForCurrentDevice;

@end
