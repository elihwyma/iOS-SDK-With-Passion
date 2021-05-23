/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SBFWallpaperOptions : NSObject

{
    _Bool _magnifyEnabled;
    _Bool _supportsCropping;
    _Bool _portrait;
    _Bool _hasVideo;
    NSString *_name;
    double _parallaxFactor;
    double _zoomScale;
    double _stillTimeInVideo;
    long long _wallpaperMode;
    long long _wallpaperStatus;
    struct CGRect _cropRect;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool parallaxEnabled;
@property (nonatomic) double parallaxFactor;
@property (nonatomic, getter=isMagnifyEnabled) _Bool magnifyEnabled;
@property (nonatomic) double zoomScale;
@property (nonatomic) _Bool supportsCropping;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic, getter=isPortrait) _Bool portrait;
@property (nonatomic) _Bool hasVideo;
@property (nonatomic) double stillTimeInVideo;
@property (nonatomic) long long wallpaperMode;
@property (nonatomic) long long wallpaperStatus;
@property (copy, nonatomic, readonly) NSData *persistentDataRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(_Bool)arg4 cropRect:(struct CGRect)arg5 portrait:(_Bool)arg6;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(_Bool)arg4 cropRect:(struct CGRect)arg5 portrait:(_Bool)arg6 hasVideo:(_Bool)arg7 stillTimeInVideo:(double)arg8;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(_Bool)arg4 cropRect:(struct CGRect)arg5 portrait:(_Bool)arg6 hasVideo:(_Bool)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)initWithStream:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(_Bool)arg4 cropRect:(struct CGRect)arg5 portrait:(_Bool)arg6 hasVideo:(_Bool)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10;
- (id)persistentPropertyList;
- (id)initWithPersistentDataRepresentation:(id)arg1;
- (struct CGSize)bestWallpaperSizeForWallpaperSize:(struct CGSize)arg1 wallpaperScale:(double)arg2 deviceType:(long long)arg3 imageScale:(double)arg4;
- (_Bool)isLooselyEqualToWallpaperOptions:(id)arg1;

@end
