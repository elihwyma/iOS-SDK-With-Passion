/*
 Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
 */

#import <SAObjects/SAIntentGroupProcessIntent.h>

@interface SAIntentGroupProcessIntent (INSExtensionService)

- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (long long)ins_analyticsEndEventType;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)ins_analyticsBeginEventType;
- (_Bool)ins_shouldUseExtendedFlowTimeout;
- (void)_handleIntentWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_resolveIntentSlotsWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_confirmIntentWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
