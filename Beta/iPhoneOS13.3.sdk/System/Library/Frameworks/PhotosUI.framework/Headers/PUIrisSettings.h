/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

@interface PUIrisSettings : PXSettings

{
    _Bool _showStatusBorder;
    _Bool _vitalityAllowed;
    _Bool _shouldAlwaysBadge;
}

@property (nonatomic, getter=showStatusBorder) _Bool showStatusBorder;
@property (nonatomic, getter=isVitalityAllowed) _Bool vitalityAllowed;
@property (nonatomic) _Bool shouldAlwaysBadge;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_photosPlayerRootSettings;

- (void)setDefaultValues;
- (void)restoreDefaultValues;
- (id)parentSettings;
- (void)performPostSaveActions;

@end
