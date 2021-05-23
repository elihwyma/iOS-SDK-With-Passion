/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <MobileAsset/MAAsset.h>

@interface MAAsset (CSAsset)

- (id)path;
- (id)_version;
- (id)_compatibilityVersion;
- (_Bool)isDownloading;
- (id)_footprint;
- (_Bool)isPremium;
- (_Bool)canBePurged;
- (_Bool)isLatestCompareTo:(id)arg1;
- (id)getCSAssetOfType:(unsigned long long)arg1;
- (_Bool)isCSAssetInstalled;

@end
