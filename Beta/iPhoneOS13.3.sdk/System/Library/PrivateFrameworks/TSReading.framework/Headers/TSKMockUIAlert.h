/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKUIAlert.h>

@interface TSKMockUIAlert : TSKUIAlert

+ (void)setDismissalButtonIndex:(long long)arg1;

- (long long)firstOtherButtonIndex;
- (long long)cancelButtonIndex;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
- (void)showWithDismissedByButtonBlock:(CDUnknownBlockType)arg1;

@end
