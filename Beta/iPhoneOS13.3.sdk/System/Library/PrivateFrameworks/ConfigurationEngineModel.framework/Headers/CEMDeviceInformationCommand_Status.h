/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceInformationCommand_StatusErrorResponses, CEMDeviceInformationCommand_StatusQueryResponses;

@interface CEMDeviceInformationCommand_Status : CEMPayloadBase

{
    CEMDeviceInformationCommand_StatusQueryResponses *_statusQueryResponses;
    CEMDeviceInformationCommand_StatusErrorResponses *_statusErrorResponses;
}

@property (copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponses *statusQueryResponses;
@property (copy, nonatomic) CEMDeviceInformationCommand_StatusErrorResponses *statusErrorResponses;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithQueryResponses:(id)arg1 withErrorResponses:(id)arg2;
+ (id)buildRequiredOnlyWithQueryResponses:(id)arg1;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
