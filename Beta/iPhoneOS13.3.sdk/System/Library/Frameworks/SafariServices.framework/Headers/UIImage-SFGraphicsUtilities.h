/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIImage.h>

@interface UIImage (SFGraphicsUtilities)

@property (nonatomic, readonly) long long _sf_tabSnapshotEffectsVersion;
@property (nonatomic, readonly) _Bool _sf_hasRegisteredFaviconForDarkUserInterfaceStyle;
@property (nonatomic, readonly) _Bool _sf_shouldApplyBackingForDarkBackdrop;

+ (id)_sf_fallbackFavicon;
+ (id)ss_imageNamed:(id)arg1;
+ (id)sf_imageFromMainBundleNamed:(id)arg1;
+ (id)_sf_faviconFromSystemImageNamed:(id)arg1;
+ (id)_sf_favoritesFavicon;

- (id)_sf_resizeImageToSize:(struct CGSize)arg1;
- (_Bool)_sf_isLaunchImageSizedForOrientation:(long long)arg1 includesStatusBar:(_Bool *)arg2;
- (id)_sf_imageByResizingWithAccessibilityScale:(double)arg1;
- (id)_sf_initWithCGImage:(struct CGImage *)arg1 tabSnapshotEffectsVersion:(long long)arg2;
- (void)_sf_registerFaviconForDarkUserInterfaceStyle;

@end
