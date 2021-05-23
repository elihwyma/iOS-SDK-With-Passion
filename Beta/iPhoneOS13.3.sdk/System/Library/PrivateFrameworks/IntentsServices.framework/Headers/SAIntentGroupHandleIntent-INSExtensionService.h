/*
 Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
 */

#import <SAObjects/SAIntentGroupHandleIntent.h>

@interface SAIntentGroupHandleIntent (INSExtensionService)

- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (long long)ins_analyticsEndEventType;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)ins_analyticsBeginEventType;
- (_Bool)ins_shouldUseExtendedFlowTimeout;

@end
