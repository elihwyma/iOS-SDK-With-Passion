/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMDeviceDockDeclaration : CEMConfigurationBase

{
    NSString *_payloadOrientation;
    NSNumber *_payloadPositionImmutable;
    NSNumber *_payloadAutohide;
    NSNumber *_payloadAutohideImmutable;
    NSNumber *_payloadMinimizeToApplication;
    NSNumber *_payloadMinimizeToApplicationImmutable;
    NSNumber *_payloadMagnification;
    NSNumber *_payloadMagnifyImmutable;
    NSNumber *_payloadLargesize;
    NSNumber *_payloadMagsizeImmutable;
    NSNumber *_payloadShowProcessIndicators;
    NSNumber *_payloadLaunchanim;
    NSNumber *_payloadLaunchanimImmutable;
    NSString *_payloadMineffect;
    NSNumber *_payloadMineffectImmutable;
    NSNumber *_payloadTilesize;
    NSNumber *_payloadSizeImmutable;
    NSArray *_payloadMCXDockSpecialFolders;
    NSNumber *_payloadAllowDockFixupOverride;
    NSNumber *_payloadStaticOnly;
    NSArray *_payloadStaticOthers;
    NSArray *_payloadStaticApps;
    NSNumber *_payloadContentsImmutable;
    NSNumber *_payloadWindowtabbingImmutable;
    NSNumber *_payloadDblclickbehaviorImmutable;
    NSNumber *_payloadShowindicatorsImmutable;
    NSNumber *_payloadShowRecents;
}

@property (copy, nonatomic) NSString *payloadOrientation;
@property (copy, nonatomic) NSNumber *payloadPositionImmutable;
@property (copy, nonatomic) NSNumber *payloadAutohide;
@property (copy, nonatomic) NSNumber *payloadAutohideImmutable;
@property (copy, nonatomic) NSNumber *payloadMinimizeToApplication;
@property (copy, nonatomic) NSNumber *payloadMinimizeToApplicationImmutable;
@property (copy, nonatomic) NSNumber *payloadMagnification;
@property (copy, nonatomic) NSNumber *payloadMagnifyImmutable;
@property (copy, nonatomic) NSNumber *payloadLargesize;
@property (copy, nonatomic) NSNumber *payloadMagsizeImmutable;
@property (copy, nonatomic) NSNumber *payloadShowProcessIndicators;
@property (copy, nonatomic) NSNumber *payloadLaunchanim;
@property (copy, nonatomic) NSNumber *payloadLaunchanimImmutable;
@property (copy, nonatomic) NSString *payloadMineffect;
@property (copy, nonatomic) NSNumber *payloadMineffectImmutable;
@property (copy, nonatomic) NSNumber *payloadTilesize;
@property (copy, nonatomic) NSNumber *payloadSizeImmutable;
@property (copy, nonatomic) NSArray *payloadMCXDockSpecialFolders;
@property (copy, nonatomic) NSNumber *payloadAllowDockFixupOverride;
@property (copy, nonatomic) NSNumber *payloadStaticOnly;
@property (copy, nonatomic) NSArray *payloadStaticOthers;
@property (copy, nonatomic) NSArray *payloadStaticApps;
@property (copy, nonatomic) NSNumber *payloadContentsImmutable;
@property (copy, nonatomic) NSNumber *payloadWindowtabbingImmutable;
@property (copy, nonatomic) NSNumber *payloadDblclickbehaviorImmutable;
@property (copy, nonatomic) NSNumber *payloadShowindicatorsImmutable;
@property (copy, nonatomic) NSNumber *payloadShowRecents;
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
+ (id)buildWithIdentifier:(id)arg1 withOrientation:(id)arg2 withPositionImmutable:(id)arg3 withAutohide:(id)arg4 withAutohideImmutable:(id)arg5 withMinimizeToApplication:(id)arg6 withMinimizeToApplicationImmutable:(id)arg7 withMagnification:(id)arg8 withMagnifyImmutable:(id)arg9 withLargesize:(id)arg10 withMagsizeImmutable:(id)arg11 withShowProcessIndicators:(id)arg12 withLaunchanim:(id)arg13 withLaunchanimImmutable:(id)arg14 withMineffect:(id)arg15 withMineffectImmutable:(id)arg16 withTilesize:(id)arg17 withSizeImmutable:(id)arg18 withMCXDockSpecialFolders:(id)arg19 withAllowDockFixupOverride:(id)arg20 withStaticOnly:(id)arg21 withStaticOthers:(id)arg22 withStaticApps:(id)arg23 withContentsImmutable:(id)arg24 withWindowtabbingImmutable:(id)arg25 withDblclickbehaviorImmutable:(id)arg26 withShowindicatorsImmutable:(id)arg27 withShowRecents:(id)arg28;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
