/*
 Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
 */

#import <SAObjects/SAIntentGroupLaunchAppWithUserActivity.h>

@interface SAIntentGroupLaunchAppWithUserActivity (INSExtensionService)

- (long long)ins_analyticsEndEventType;
- (long long)ins_analyticsBeginEventType;
- (_Bool)ins_shouldUseExtendedFlowTimeout;
- (void)ins_launchAppWithConnection:(id)arg1 userActivityIdentifier:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
