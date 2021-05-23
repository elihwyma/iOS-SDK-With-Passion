/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem : CEMPayloadBase

{
    NSString *_statusGUID;
    NSString *_statusShortName;
}

@property (copy, nonatomic) NSString *statusGUID;
@property (copy, nonatomic) NSString *statusShortName;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithGUID:(id)arg1 withShortName:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
