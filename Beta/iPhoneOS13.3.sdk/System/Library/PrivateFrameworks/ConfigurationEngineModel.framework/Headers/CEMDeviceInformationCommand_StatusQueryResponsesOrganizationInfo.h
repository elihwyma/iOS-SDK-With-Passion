/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo : CEMPayloadBase

{
    NSString *_statusOrganizationName;
    NSString *_statusOrganizationAddress;
    NSString *_statusOrganizationPhone;
    NSString *_statusOrganizationEmail;
    NSString *_statusOrganizationMagic;
}

@property (copy, nonatomic) NSString *statusOrganizationName;
@property (copy, nonatomic) NSString *statusOrganizationAddress;
@property (copy, nonatomic) NSString *statusOrganizationPhone;
@property (copy, nonatomic) NSString *statusOrganizationEmail;
@property (copy, nonatomic) NSString *statusOrganizationMagic;

+ (id)allowedStatusKeys;
+ (id)buildWithOrganizationName:(id)arg1 withOrganizationAddress:(id)arg2 withOrganizationPhone:(id)arg3 withOrganizationEmail:(id)arg4 withOrganizationMagic:(id)arg5;
+ (id)buildRequiredOnlyWithOrganizationName:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
