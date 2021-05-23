/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <WallpaperKit/Swift-Protocol.h>

@class NSString;

@protocol WKWallpaper <Swift>

@property (nonatomic, readonly) unsigned long long identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long type;

@end
