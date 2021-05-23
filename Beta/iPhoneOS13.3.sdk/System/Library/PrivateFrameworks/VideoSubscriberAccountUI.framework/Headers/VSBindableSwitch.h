/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UISwitch.h>

@interface VSBindableSwitch : UISwitch

- (void)vs_bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)vs_unbind:(id)arg1;
- (void)_updateBindingForValueChanged:(id)arg1;

@end
