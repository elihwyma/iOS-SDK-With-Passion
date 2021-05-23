/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <MobileAsset/MAAsset.h>

@interface MAAsset (SUS)

- (_Bool)isInstalled;
- (_Bool)purge;
- (_Bool)isDownloading;
- (_Bool)cancelDownload;
- (_Bool)isEmergencyUpdate;
- (void)cleanupAsset;
- (void)cancelDownloadIfNecessary;
- (_Bool)isDownloadingOrInstalled;

@end
