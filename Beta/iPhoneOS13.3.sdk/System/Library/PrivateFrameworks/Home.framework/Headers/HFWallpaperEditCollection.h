/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFWallpaper, HFWallpaperSlice;

@interface HFWallpaperEditCollection : NSObject

{
    HFWallpaper *_wallpaper;
    HFWallpaperSlice *_originalSlice;
    HFWallpaperSlice *_processedSlice;
}

@property (nonatomic, readonly) HFWallpaper *wallpaper;
@property (nonatomic, readonly) HFWallpaperSlice *originalSlice;
@property (nonatomic, readonly) HFWallpaperSlice *processedSlice;

- (id)description;
- (id)initWithWallpaper:(id)arg1 originalSlice:(id)arg2 processedSlice:(id)arg3;

@end
