/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PFMediaCapabilities : NSObject

{
    NSDictionary *_capabilitiesInformation;
}

@property (retain) NSDictionary *capabilitiesInformation;

+ (_Bool)setNewFormatsConfiguration:(long long)arg1 fromSource:(long long)arg2;
+ (id)legacyCapabilities;
+ (id)capabilitiesForCurrentDevice;
+ (id)stringForSupport:(long long)arg1;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)arg1;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)arg1;
+ (id)testCapabilitiesNotSupportingHEVC;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (void)setRecordSlomoConfiguration:(id)arg1;
+ (void)setRecordVideoConfiguration:(id)arg1;
+ (long long)newFormatsConfiguration;
+ (id)recordVideoConfigurationWithValidValues:(id)arg1;
+ (id)recordSlomoConfigurationWithValidValues:(id)arg1;

- (id)description;
- (long long)supportForAdjustmentBaseResources;
- (_Bool)supportsTranscodeChoice;
- (id)initWithOpaqueRepresentation:(id)arg1;
- (long long)supportForCodec:(unsigned int)arg1;
- (long long)supportForContainerTypeIdentifier:(id)arg1;
- (long long)supportForLivePhotoVersion:(id)arg1;
- (long long)supportForAssetBundleVersion:(id)arg1;
- (long long)supportForFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (long long)supportForAVAsset:(id)arg1;
- (id)opaqueRepresentation;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)arg1 selector:(SEL)arg2;
- (long long)userDefaultsPeerOverrideValue;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)arg1 selector:(SEL)arg2;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;

@end
