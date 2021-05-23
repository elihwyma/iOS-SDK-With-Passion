/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceListRestrictionsCommand_StatusBooleanDictionary, CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary, CEMDeviceListRestrictionsCommand_StatusValueDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary : CEMPayloadBase

{
    CEMDeviceListRestrictionsCommand_StatusBooleanDictionary *_statusRestrictedBool;
    CEMDeviceListRestrictionsCommand_StatusValueDictionary *_statusRestrictedValue;
    CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *_statusIntersection;
    CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *_statusUnion;
}

@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusBooleanDictionary *statusRestrictedBool;
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusValueDictionary *statusRestrictedValue;
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusIntersection;
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusUnion;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRestrictedBool:(id)arg1 withRestrictedValue:(id)arg2 withIntersection:(id)arg3 withUnion:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
