/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUNamedWallpaperFactory : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_gradientWallpaperImageForIdentifier:(id)arg1;
+ (id)_defaultBlackWallpaperImage;

- (id)allWallpapersForCollection:(long long)arg1;
- (id)defaultWallpaperForCollection:(long long)arg1;
- (id)imageForWallpaper:(id)arg1;

@end
