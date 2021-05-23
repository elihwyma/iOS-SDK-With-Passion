/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@interface HUQuickControlBackgroundEffectView : UIView

{
    unsigned long long _effectType;
}

@property (nonatomic, readonly) unsigned long long effectType;

- (void)tintColorDidChange;
- (void)_configureForCurrentEffectType;
- (id)initWithEffectType:(unsigned long long)arg1;

@end
