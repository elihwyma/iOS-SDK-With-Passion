/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PHSettings.h>

@class PHImageManagerSettings, PHResourceDownloadSettings;

@interface PHRootSettings : PHSettings

{
    PHImageManagerSettings *_imageManagerSettings;
    PHResourceDownloadSettings *_resourceDownloadSettings;
}

@property (nonatomic, readonly) PHImageManagerSettings *imageManagerSettings;
@property (nonatomic, readonly) PHResourceDownloadSettings *resourceDownloadSettings;

+ (id)sharedSettings;
+ (id)settingsControllerModule;

- (id)parentSettings;

@end
