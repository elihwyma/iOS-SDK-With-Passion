/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceListRestrictionsCommand_StatusProfileRestrictions, CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary;

@interface CEMDeviceListRestrictionsCommand_Status : CEMPayloadBase

{
    CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *_statusGlobalRestrictions;
    CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *_statusProfileRestrictions;
}

@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *statusGlobalRestrictions;
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *statusProfileRestrictions;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithGlobalRestrictions:(id)arg1 withProfileRestrictions:(id)arg2;
+ (id)buildRequiredOnlyWithGlobalRestrictions:(id)arg1 withProfileRestrictions:(id)arg2;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
