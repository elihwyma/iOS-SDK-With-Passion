/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase

{
    NSNumber *_statusPasswordExists;
    NSNumber *_statusChangePending;
    NSNumber *_statusAllowOroms;
}

@property (copy, nonatomic) NSNumber *statusPasswordExists;
@property (copy, nonatomic) NSNumber *statusChangePending;
@property (copy, nonatomic) NSNumber *statusAllowOroms;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithPasswordExists:(id)arg1 withChangePending:(id)arg2 withAllowOroms:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
