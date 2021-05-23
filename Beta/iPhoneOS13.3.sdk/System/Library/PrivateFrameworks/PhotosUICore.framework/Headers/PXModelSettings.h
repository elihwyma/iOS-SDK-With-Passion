/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXModelSettings : PXSettings

{
    double _photoAnalysisGraphInitialGraceDelay;
    double _photoAnalysisGraphProgressUpdateInterval;
}

@property (nonatomic) double photoAnalysisGraphInitialGraceDelay;
@property (nonatomic) double photoAnalysisGraphProgressUpdateInterval;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
