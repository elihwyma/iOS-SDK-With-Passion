/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@interface CEMManagementOrganizationInformationDeclaration_Status : CEMPayloadBase

+ (id)build;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildRequiredOnly;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
