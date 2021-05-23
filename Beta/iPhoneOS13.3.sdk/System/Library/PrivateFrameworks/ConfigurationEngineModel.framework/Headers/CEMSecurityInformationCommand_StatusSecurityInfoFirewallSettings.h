/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings : CEMPayloadBase

{
    NSNumber *_statusFirewallEnabled;
    NSNumber *_statusBlockAllIncoming;
    NSNumber *_statusStealthMode;
    NSArray *_statusApplications;
}

@property (copy, nonatomic) NSNumber *statusFirewallEnabled;
@property (copy, nonatomic) NSNumber *statusBlockAllIncoming;
@property (copy, nonatomic) NSNumber *statusStealthMode;
@property (copy, nonatomic) NSArray *statusApplications;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithFirewallEnabled:(id)arg1 withBlockAllIncoming:(id)arg2 withStealthMode:(id)arg3 withApplications:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
