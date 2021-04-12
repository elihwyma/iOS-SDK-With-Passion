//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMSystemXsanSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadSanName;
    NSArray *_payloadSanConfigURLs;
    NSArray *_payloadFsnameservers;
    NSString *_payloadSanAuthMethod;
    NSString *_payloadSharedSecret;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSharedSecret:(id)arg5;
+ (id)buildWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSanAuthMethod:(id)arg5 withSharedSecret:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadSharedSecret; // @synthesize payloadSharedSecret=_payloadSharedSecret;
@property(copy, nonatomic) NSString *payloadSanAuthMethod; // @synthesize payloadSanAuthMethod=_payloadSanAuthMethod;
@property(copy, nonatomic) NSArray *payloadFsnameservers; // @synthesize payloadFsnameservers=_payloadFsnameservers;
@property(copy, nonatomic) NSArray *payloadSanConfigURLs; // @synthesize payloadSanConfigURLs=_payloadSanConfigURLs;
@property(copy, nonatomic) NSString *payloadSanName; // @synthesize payloadSanName=_payloadSanName;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end

