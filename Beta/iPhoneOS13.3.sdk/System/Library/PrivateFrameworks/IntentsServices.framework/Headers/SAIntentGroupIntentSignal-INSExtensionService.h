/*
 Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
 */

#import <SAObjects/SAIntentGroupIntentSignal.h>

@interface SAIntentGroupIntentSignal (INSExtensionService)

- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (long long)ins_analyticsEndEventType;
- (long long)ins_analyticsBeginEventType;
- (_Bool)ins_shouldUseExtendedFlowTimeout;

@end
