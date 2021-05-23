/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, WKWallpaperBundleImporter;

@interface WKDefaultWallpaperManager : NSObject

{
    NSDictionary *__defaultWallpaperLookup;
    WKWallpaperBundleImporter *__defaultWallpaperBundleImporter;
}

@property (retain, nonatomic) NSDictionary *_defaultWallpaperLookup;
@property (retain, nonatomic) WKWallpaperBundleImporter *_defaultWallpaperBundleImporter;

+ (id)deviceColor;
+ (id)deviceEnclosureColor;
+ (id)defaultWallpaperManager;
+ (id)deviceProductType;
+ (id)defaultWallpaperLookupURL;
+ (id)_pathForStillWallpapers;
+ (id)deviceLogicalScreenClass;

- (id)init;
- (id)defaultWallpaperBundle;
- (void)_loadDefaultWallpaperFile;

@end
