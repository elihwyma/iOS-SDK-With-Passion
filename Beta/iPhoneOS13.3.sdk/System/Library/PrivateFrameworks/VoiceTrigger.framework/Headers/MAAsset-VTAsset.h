/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <MobileAsset/MAAsset.h>

@interface MAAsset (VTAsset)

- (id)description;
- (id)path;
- (id)version;
- (id)compatibilityVersion;
- (id)languages;
- (_Bool)isDownloading;
- (id)footprint;
- (_Bool)isPremium;
- (_Bool)isAvailableLocally;
- (_Bool)isVTAssetInstalled;
- (_Bool)canBePurged;
- (_Bool)isLatestCompareTo:(id)arg1;

@end
