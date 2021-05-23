/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKAlertSession.h>

@class STKSessionBehavior;

@interface STKSIMToolkitAlertSession : STKAlertSession

{
    long long _event;
    STKSessionBehavior *_behavior;
}

@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly) STKSessionBehavior *behavior;

- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)sendResponse:(long long)arg1 withBOOLResult:(_Bool)arg2;
- (void)sendSuccessWithSelectedIndex:(unsigned long long)arg1;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 behavior:(id)arg5 sound:(id)arg6;

@end
