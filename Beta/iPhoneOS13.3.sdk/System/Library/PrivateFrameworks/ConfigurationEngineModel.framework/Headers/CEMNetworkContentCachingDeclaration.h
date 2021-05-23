/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkContentCachingDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowPersonalCaching;
    NSNumber *_payloadAllowSharedCaching;
    NSNumber *_payloadAutoActivation;
    NSNumber *_payloadCacheLimit;
    NSString *_payloadDataPath;
    NSNumber *_payloadDenyActivation;
    NSNumber *_payloadDenyTetheredCaching;
    NSArray *_payloadListenRanges;
    NSNumber *_payloadListenRangesOnly;
    NSNumber *_payloadListenWithPeersAndParents;
    NSNumber *_payloadLocalSubnetsOnly;
    NSNumber *_payloadLogClientIdentity;
    NSArray *_payloadParents;
    NSString *_payloadParentSelectionPolicy;
    NSArray *_payloadPeerFilterRanges;
    NSArray *_payloadPeerListenRanges;
    NSNumber *_payloadPeerLocalSubnetsOnly;
    NSNumber *_payloadPort;
    NSArray *_payloadPublicRanges;
}

@property (copy, nonatomic) NSNumber *payloadAllowPersonalCaching;
@property (copy, nonatomic) NSNumber *payloadAllowSharedCaching;
@property (copy, nonatomic) NSNumber *payloadAutoActivation;
@property (copy, nonatomic) NSNumber *payloadCacheLimit;
@property (copy, nonatomic) NSString *payloadDataPath;
@property (copy, nonatomic) NSNumber *payloadDenyActivation;
@property (copy, nonatomic) NSNumber *payloadDenyTetheredCaching;
@property (copy, nonatomic) NSArray *payloadListenRanges;
@property (copy, nonatomic) NSNumber *payloadListenRangesOnly;
@property (copy, nonatomic) NSNumber *payloadListenWithPeersAndParents;
@property (copy, nonatomic) NSNumber *payloadLocalSubnetsOnly;
@property (copy, nonatomic) NSNumber *payloadLogClientIdentity;
@property (copy, nonatomic) NSArray *payloadParents;
@property (copy, nonatomic) NSString *payloadParentSelectionPolicy;
@property (copy, nonatomic) NSArray *payloadPeerFilterRanges;
@property (copy, nonatomic) NSArray *payloadPeerListenRanges;
@property (copy, nonatomic) NSNumber *payloadPeerLocalSubnetsOnly;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) NSArray *payloadPublicRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowPersonalCaching:(id)arg2 withAllowSharedCaching:(id)arg3 withAutoActivation:(id)arg4 withCacheLimit:(id)arg5 withDataPath:(id)arg6 withDenyActivation:(id)arg7 withDenyTetheredCaching:(id)arg8 withListenRanges:(id)arg9 withListenRangesOnly:(id)arg10 withListenWithPeersAndParents:(id)arg11 withLocalSubnetsOnly:(id)arg12 withLogClientIdentity:(id)arg13 withParents:(id)arg14 withParentSelectionPolicy:(id)arg15 withPeerFilterRanges:(id)arg16 withPeerListenRanges:(id)arg17 withPeerLocalSubnetsOnly:(id)arg18 withPort:(id)arg19 withPublicRanges:(id)arg20;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
