/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL, SBFGradient, SBFWallpaperOptions, SBWallpaperImage, UIColor, UIImage;

@interface SBFWallpaperConfiguration : NSObject

{
    _Bool _needsWallpaperDimmingTreatment;
    long long _wallpaperType;
    SBWallpaperImage *_wallpaperImage;
    UIImage *_wallpaperOriginalImage;
    UIImage *_wallpaperThumbnailImage;
    NSData *_wallpaperThumbnailImageData;
    NSData *_wallpaperImageHashData;
    SBFWallpaperOptions *_wallpaperOptions;
    NSDictionary *_proceduralWallpaperInfo;
    NSURL *_videoURL;
    NSURL *_originalVideoURL;
    UIColor *_wallpaperColor;
    NSString *_wallpaperColorName;
    SBFGradient *_wallpaperGradient;
    long long _variant;
}

@property (nonatomic, readonly) long long variant;
@property (nonatomic) _Bool needsWallpaperDimmingTreatment;
@property (retain, nonatomic) SBWallpaperImage *wallpaperImage;
@property (retain, nonatomic) UIImage *wallpaperOriginalImage;
@property (retain, nonatomic) UIImage *wallpaperThumbnailImage;
@property (copy, nonatomic) NSData *wallpaperThumbnailImageData;
@property (copy, nonatomic) NSData *wallpaperImageHashData;
@property (copy, nonatomic) NSDictionary *proceduralWallpaperInfo;
@property (copy, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSURL *originalVideoURL;
@property (copy, nonatomic) SBFWallpaperOptions *wallpaperOptions;
@property (copy, nonatomic) UIColor *wallpaperColor;
@property (copy, nonatomic) NSString *wallpaperColorName;
@property (copy, nonatomic) SBFGradient *wallpaperGradient;
@property (nonatomic, readonly) long long wallpaperType;
@property (copy, nonatomic, readonly) NSString *proceduralWallpaperIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *proceduralWallpaperOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithVariant:(long long)arg1 type:(long long)arg2;

@end
