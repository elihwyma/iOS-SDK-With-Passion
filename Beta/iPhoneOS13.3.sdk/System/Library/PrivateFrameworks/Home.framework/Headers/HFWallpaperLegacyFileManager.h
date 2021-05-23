/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject

{
    NSURL *_wallpaperFolderURL;
}

@property (retain, nonatomic) NSURL *wallpaperFolderURL;

- (id)init;
- (id)filenameForType:(long long)arg1 variant:(long long)arg2;
- (void)migrateCache:(CDUnknownBlockType)arg1;
- (id)clearAllWallpapers;

@end
