//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMSecurityIdentityPreferenceDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadName;
    NSString *_payloadIdentityIdentifier;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withName:(id)arg2 withIdentityIdentifier:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withName:(id)arg2 withIdentityIdentifier:(id)arg3;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadIdentityIdentifier; // @synthesize payloadIdentityIdentifier=_payloadIdentityIdentifier;
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end

