/*
 Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
 */

#import <SAObjects/SABaseCommand.h>

@interface SABaseCommand (INSExtensionService)

- (id)ins_aceIntentResponse;
- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (id)ins_jsonEncodedIntentResponse;
- (id)ins_protobufEncodedIntentResponse;
- (void)ins_invokeErrorCompletionHandler:(CDUnknownBlockType)arg1 withErrorCode:(long long)arg2 underlyingError:(id)arg3;
- (long long)ins_analyticsEndEventType;
- (id)ins_afAnalyticsContext;
- (_Bool)ins_isJSONPayload;
- (id)ins_aceIntent;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)ins_analyticsBeginEventType;
- (void)ins_invokeErrorCompletionHandler:(CDUnknownBlockType)arg1 forUnderlyingError:(id)arg2;

@end
