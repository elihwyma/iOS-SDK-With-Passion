/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface HFWallpaperFileManager : NSObject

{
    NSURL *_wallpaperFolderURL;
}

@property (retain, nonatomic) NSURL *wallpaperFolderURL;

- (id)init;
- (id)filenameForWallpaper:(id)arg1;
- (_Bool)originalImageExistsForWallpaper:(id)arg1;
- (id)originalImageForWallpaper:(id)arg1;
- (void)saveOriginalImage:(id)arg1 forWallpaper:(id)arg2;
- (void)pruneUnusedOriginalWallpaperImages:(id)arg1;

@end
