/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HFCroppedWallpaperInfo, NSString;

@interface HFWallpaper : NSObject <Swift>

{
    long long _type;
    HFCroppedWallpaperInfo *_cropInfo;
    NSString *_assetIdentifier;
}

@property (copy, nonatomic) HFCroppedWallpaperInfo *cropInfo;
@property (copy, nonatomic, readonly) NSString *assetIdentifier;
@property (nonatomic, readonly) long long type;

+ (struct CGSize)size;
+ (struct CGSize)contentSizeForWallpaper;
+ (id)customWallpaperWithAssetIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)wallpaperIdentifier;
- (id)sliceIdentifierForVariant:(long long)arg1;
- (id)initWithType:(long long)arg1 assetIdentifier:(id)arg2 cropInfo:(id)arg3;

@end
