/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMCommandBase.h>

@class NSNumber, NSString;

@interface CEMClassroomDeleteUserCommand : CEMCommandBase

{
    NSString *_payloadUserName;
    NSNumber *_payloadForceDeletion;
}

@property (copy, nonatomic) NSString *payloadUserName;
@property (copy, nonatomic) NSNumber *payloadForceDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withUserName:(id)arg2 withForceDeletion:(id)arg3;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withUserName:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mustBeSupervised;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (int)executionLevel;

@end
