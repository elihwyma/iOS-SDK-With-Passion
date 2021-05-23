/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMCommandBase.h>

@class NSNumber, NSString;

@interface CEMApplicationUpdateApplicationCommand : CEMCommandBase

{
    NSString *_payloadBundleIdentifier;
    NSNumber *_payloadImmediate;
}

@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSNumber *payloadImmediate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withBundleIdentifier:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withBundleIdentifier:(id)arg2 withImmediate:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mustBeSupervised;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (int)executionLevel;

@end
