/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHBackCompatRemoteAchievementAvailabilityKeyWriting, ACHMobileAssetProvider, NSDictionary, NSString;

@protocol ACHTemplateSourceDelegate, OS_dispatch_queue;

@interface ACHRemoteTemplateSource : NSObject

{
    NSString *_buildVersionOverride;
    NSObject<ACHTemplateSourceDelegate> *delegate;
    ACHMobileAssetProvider *_mobileAssetProvider;
    ACHBackCompatRemoteAchievementAvailabilityKeyWriting *_backCompatAvailabilityKeyWriter;
    NSDictionary *_resourceAssetURLsByUniqueName;
    NSDictionary *_stickerAssetURLsByUniqueName;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider;
@property (retain, nonatomic) ACHBackCompatRemoteAchievementAvailabilityKeyWriting *backCompatAvailabilityKeyWriter;
@property (retain, nonatomic) NSDictionary *resourceAssetURLsByUniqueName;
@property (retain, nonatomic) NSDictionary *stickerAssetURLsByUniqueName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;

- (id)buildVersion;
- (_Bool)sourceShouldRunForDate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (void)_addURLsByUniqueNameToDictionary:(id)arg1 fromAsset:(id)arg2;
- (void)_removeURLsByUniqueNameFromDictionary:(id)arg1 fromAsset:(id)arg2;
- (id)_resourceAssetURLForTemplate:(id)arg1;
- (id)initWithMobileAssetProvider:(id)arg1 backCompatWriter:(id)arg2;
- (void)setBuildVersionOverride:(id)arg1;

@end
