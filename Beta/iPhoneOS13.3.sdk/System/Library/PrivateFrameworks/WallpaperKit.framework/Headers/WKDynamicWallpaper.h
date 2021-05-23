/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <WallpaperKit/WKAbstractWallpaper.h>

@class NSDictionary, NSString, UIImage;

@interface WKDynamicWallpaper : WKAbstractWallpaper

{
    NSDictionary *__dynamicDictionary;
    UIImage *__thumbnailImage;
}

@property (retain, nonatomic) NSDictionary *_dynamicDictionary;
@property (retain, nonatomic) UIImage *_thumbnailImage;
@property (nonatomic, readonly) unsigned long long identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long type;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;
- (id)thumbnailImage;
- (id)wallpaperValue;
- (id)initWithIdentifier:(unsigned long long)arg1 dictionary:(id)arg2;

@end
