/*
 Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
 */

#import <SAObjects/SAIntentGroupLaunchAppWithIntent.h>

@interface SAIntentGroupLaunchAppWithIntent (INSExtensionService)

- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (id)ins_jsonEncodedIntentResponse;
- (id)ins_protobufEncodedIntentResponse;
- (long long)ins_analyticsEndEventType;
- (long long)ins_analyticsBeginEventType;
- (void)ins_launchAppWithConnection:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
