/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionaryANYrestrictionname : CEMPayloadBase

{
    NSArray *_statusValues;
}

@property (copy, nonatomic) NSArray *statusValues;

+ (id)allowedStatusKeys;
+ (id)buildWithValues:(id)arg1;
+ (id)buildRequiredOnlyWithValues:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
