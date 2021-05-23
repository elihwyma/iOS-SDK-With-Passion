/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettingsApplicationsItem : CEMPayloadBase

{
    NSNumber *_statusAllowed;
    NSString *_statusBundleID;
    NSString *_statusName;
}

@property (copy, nonatomic) NSNumber *statusAllowed;
@property (copy, nonatomic) NSString *statusBundleID;
@property (copy, nonatomic) NSString *statusName;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAllowed:(id)arg1 withBundleID:(id)arg2 withName:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
