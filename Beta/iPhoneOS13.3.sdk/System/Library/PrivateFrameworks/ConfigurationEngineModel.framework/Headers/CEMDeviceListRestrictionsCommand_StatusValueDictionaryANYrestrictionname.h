/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusValueDictionaryANYrestrictionname : CEMPayloadBase

{
    NSNumber *_statusValue;
}

@property (copy, nonatomic) NSNumber *statusValue;

+ (id)allowedStatusKeys;
+ (id)buildWithValue:(id)arg1;
+ (id)buildRequiredOnlyWithValue:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
