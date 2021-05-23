/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDataSourceSettings : PXSettings

{
    _Bool _slowBackgroundFetch;
    double _delayChanges;
}

@property (nonatomic) _Bool slowBackgroundFetch;
@property (nonatomic) double delayChanges;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
