/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUAlbumListSettings : PXSettings

{
    _Bool _shouldUseEditorialLayout;
    _Bool _shouldShowSubscriberMonograms;
    _Bool _combinePeoplePlacesAndMediaTypesOnIpad;
    _Bool _allowNavigationTitleEditing;
    double _avatarSpacing;
}

@property (nonatomic) _Bool shouldUseEditorialLayout;
@property (nonatomic) _Bool shouldShowSubscriberMonograms;
@property (nonatomic) double avatarSpacing;
@property (nonatomic) _Bool combinePeoplePlacesAndMediaTypesOnIpad;
@property (nonatomic) _Bool allowNavigationTitleEditing;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
