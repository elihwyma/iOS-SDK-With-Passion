/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityInformationCommand_StatusSecurityInfo;

@interface CEMSecurityInformationCommand_Status : CEMPayloadBase

{
    CEMSecurityInformationCommand_StatusSecurityInfo *_statusSecurityInfo;
}

@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfo *statusSecurityInfo;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithSecurityInfo:(id)arg1;
+ (id)buildRequiredOnlyWithSecurityInfo:(id)arg1;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
