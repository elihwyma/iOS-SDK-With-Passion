/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUSceneSettings : PXSettings

{
    _Bool _showConfidenceOverlay;
    unsigned long long _inspectorSortOrder;
}

@property (nonatomic) _Bool showConfidenceOverlay;
@property (nonatomic) unsigned long long inspectorSortOrder;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
