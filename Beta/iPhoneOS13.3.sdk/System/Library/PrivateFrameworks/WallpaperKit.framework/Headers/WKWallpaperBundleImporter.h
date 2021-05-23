/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@protocol OS_dispatch_queue;

@interface WKWallpaperBundleImporter : NSObject

{
    NSObject<OS_dispatch_queue> *__bundleImportQueue;
    NSArray *__wallpaperTypesOrdering;
    NSDictionary *__wallpaperTypeToBundleCollection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_bundleImportQueue;
@property (retain, nonatomic) NSArray *_wallpaperTypesOrdering;
@property (retain, nonatomic) NSDictionary *_wallpaperTypeToBundleCollection;
@property (nonatomic, readonly) long long numberOfWallpaperBundleCollections;

+ (id)defaultWallpaperBundleImporter;
+ (id)wallpapersConfigurationFileURL;

- (id)init;
- (unsigned long long)wallpaperTypeAtIndex:(unsigned long long)arg1;
- (id)wallpaperBundleCollectionForWallpaperType:(unsigned long long)arg1;
- (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1;
- (id)wallpaperBundleWithIdentifier:(unsigned long long)arg1;
- (void)_loadWallpapersFromDisk;

@end
