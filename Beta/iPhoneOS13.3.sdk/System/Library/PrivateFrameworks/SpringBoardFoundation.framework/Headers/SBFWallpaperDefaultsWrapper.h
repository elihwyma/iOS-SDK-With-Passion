/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface SBFWallpaperDefaultsWrapper : NSObject

{
    _Bool _supportsCropping;
    _Bool _magnifyEnabled;
    _Bool _portrait;
    _Bool _hasVideo;
    _Bool _wallpaperWasUserSet;
    double _parallaxFactor;
    double _zoomScale;
    NSString *_wallpaperName;
    NSData *_imageHashData;
    long long _wallpaperMode;
    double _stillTimeInVideo;
    NSString *_wallpaperIdentifier;
    NSDictionary *_wallpaperOptions;
    NSData *_colorData;
    NSString *_colorName;
    NSData *_gradientData;
    struct CGRect _cropRect;
}

@property (nonatomic) double parallaxFactor;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic) _Bool supportsCropping;
@property (nonatomic) _Bool magnifyEnabled;
@property (nonatomic) _Bool portrait;
@property (retain, nonatomic) NSString *wallpaperName;
@property (retain, nonatomic) NSData *imageHashData;
@property (nonatomic) long long wallpaperMode;
@property (nonatomic) _Bool hasVideo;
@property (nonatomic) double stillTimeInVideo;
@property (retain, nonatomic) NSString *wallpaperIdentifier;
@property (retain, nonatomic) NSDictionary *wallpaperOptions;
@property (nonatomic) _Bool wallpaperWasUserSet;
@property (retain, nonatomic) NSData *colorData;
@property (retain, nonatomic) NSString *colorName;
@property (retain, nonatomic) NSData *gradientData;

+ (id)lockScreenWrapperForLegacyDefaults:(id)arg1;
+ (id)homeScreenWrapperForLegacyDefaults:(id)arg1;

- (id)initWithWallpaperDefaultsDict:(id)arg1;
- (id)wallpaperDefaultsDict;

@end
