/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WKWallpaperBundle;

@interface WKWallpaperBundleCollection : NSObject

{
    unsigned long long _wallpaperType;
    NSString *_displayName;
    WKWallpaperBundle *_previewBundle;
    NSMutableArray *__wallpaperBundles;
    NSMutableDictionary *__wallpaperLookup;
}

@property (nonatomic) unsigned long long wallpaperType;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) WKWallpaperBundle *previewBundle;
@property (retain, nonatomic) NSMutableArray *_wallpaperBundles;
@property (retain, nonatomic) NSMutableDictionary *_wallpaperLookup;
@property (nonatomic, readonly) long long numberOfItems;

- (id)wallpaperBundleAtIndex:(unsigned long long)arg1;
- (id)initWithWallpaperType:(unsigned long long)arg1 previewBundle:(id)arg2;
- (id)wallpaperBundleWithIdentifier:(unsigned long long)arg1;
- (void)appendWallpaperBundle:(id)arg1;

@end
