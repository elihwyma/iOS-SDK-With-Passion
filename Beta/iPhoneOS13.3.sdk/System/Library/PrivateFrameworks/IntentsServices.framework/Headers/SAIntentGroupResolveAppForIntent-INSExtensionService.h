/*
 Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
 */

#import <SAObjects/SAIntentGroupResolveAppForIntent.h>

@interface SAIntentGroupResolveAppForIntent (INSExtensionService)

- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (long long)ins_analyticsEndEventType;
- (long long)ins_analyticsBeginEventType;
- (void)ins_resolveAppForIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)ins_shouldUseExtendedFlowTimeout;

@end
