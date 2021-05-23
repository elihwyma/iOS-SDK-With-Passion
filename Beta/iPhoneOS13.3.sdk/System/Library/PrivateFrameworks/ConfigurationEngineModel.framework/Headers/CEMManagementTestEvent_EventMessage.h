/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestEvent_EventMessage : CEMPayloadBase

{
    NSString *_eventmessageEcho;
}

@property (copy, nonatomic) NSString *eventmessageEcho;

+ (id)allowedReasons;
+ (id)buildWithEcho:(id)arg1;
+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)allowedEventMessageKeys;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
