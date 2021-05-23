/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusValueDictionary : CEMPayloadBase

{
    NSDictionary *_statusANY;
}

@property (copy, nonatomic) NSDictionary *statusANY;

+ (id)build;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
