/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMCommandBase.h>

@class NSNumber, NSString;

@interface CEMDeviceEraseCommand : CEMCommandBase

{
    NSNumber *_payloadPreserveDataPlan;
    NSNumber *_payloadDisallowProximitySetup;
    NSString *_payloadPIN;
}

@property (copy, nonatomic) NSNumber *payloadPreserveDataPlan;
@property (copy, nonatomic) NSNumber *payloadDisallowProximitySetup;
@property (copy, nonatomic) NSString *payloadPIN;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withPreserveDataPlan:(id)arg2 withDisallowProximitySetup:(id)arg3 withPIN:(id)arg4;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withPIN:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mustBeSupervised;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (int)executionLevel;

@end
