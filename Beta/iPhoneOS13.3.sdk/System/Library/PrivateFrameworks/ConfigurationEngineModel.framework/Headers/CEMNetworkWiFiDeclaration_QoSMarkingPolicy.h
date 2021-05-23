/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMNetworkWiFiDeclaration_QoSMarkingPolicy : CEMPayloadBase

{
    NSArray *_payloadQoSMarkingWhitelistedAppIdentifiers;
    NSNumber *_payloadQoSMarkingAppleAudioVideoCalls;
    NSNumber *_payloadQoSMarkingEnabled;
}

@property (copy, nonatomic) NSArray *payloadQoSMarkingWhitelistedAppIdentifiers;
@property (copy, nonatomic) NSNumber *payloadQoSMarkingAppleAudioVideoCalls;
@property (copy, nonatomic) NSNumber *payloadQoSMarkingEnabled;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithQoSMarkingWhitelistedAppIdentifiers:(id)arg1 withQoSMarkingAppleAudioVideoCalls:(id)arg2 withQoSMarkingEnabled:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
