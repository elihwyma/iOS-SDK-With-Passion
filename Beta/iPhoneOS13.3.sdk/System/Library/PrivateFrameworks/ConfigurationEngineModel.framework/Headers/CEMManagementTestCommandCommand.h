/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMCommandBase.h>

@class NSString;

@interface CEMManagementTestCommandCommand : CEMCommandBase

{
    NSString *_payloadEcho;
    NSString *_payloadReturnStatus;
}

@property (copy, nonatomic) NSString *payloadEcho;
@property (copy, nonatomic) NSString *payloadReturnStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withEcho:(id)arg2 withReturnStatus:(id)arg3;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEcho:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mustBeSupervised;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (int)executionLevel;

@end
