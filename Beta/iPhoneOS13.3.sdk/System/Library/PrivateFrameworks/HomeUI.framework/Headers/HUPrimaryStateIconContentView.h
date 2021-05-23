/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconContentView.h>

@class HFPrimaryStateIconDescriptor;

@interface HUPrimaryStateIconContentView : HUIconContentView

@property (nonatomic, readonly) HFPrimaryStateIconDescriptor *iconDescriptor;

- (void)tintColorDidChange;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;

@end
