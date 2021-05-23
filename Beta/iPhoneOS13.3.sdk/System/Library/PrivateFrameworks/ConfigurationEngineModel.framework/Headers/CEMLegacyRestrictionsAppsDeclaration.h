/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMLegacyRestrictionsAppsDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowChat;
    NSNumber *_payloadAllowiTunes;
    NSNumber *_payloadAllowNews;
    NSNumber *_payloadAllowPodcasts;
    NSNumber *_payloadAllowSafari;
    NSNumber *_payloadAllowVideoConferencing;
    NSArray *_payloadBlacklistedAppBundleIDs;
}

@property (copy, nonatomic) NSNumber *payloadAllowChat;
@property (copy, nonatomic) NSNumber *payloadAllowiTunes;
@property (copy, nonatomic) NSNumber *payloadAllowNews;
@property (copy, nonatomic) NSNumber *payloadAllowPodcasts;
@property (copy, nonatomic) NSNumber *payloadAllowSafari;
@property (copy, nonatomic) NSNumber *payloadAllowVideoConferencing;
@property (copy, nonatomic) NSArray *payloadBlacklistedAppBundleIDs;
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
+ (id)buildWithIdentifier:(id)arg1 withAllowChat:(id)arg2 withAllowiTunes:(id)arg3 withAllowNews:(id)arg4 withAllowPodcasts:(id)arg5 withAllowSafari:(id)arg6 withAllowVideoConferencing:(id)arg7 withBlacklistedAppBundleIDs:(id)arg8;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
