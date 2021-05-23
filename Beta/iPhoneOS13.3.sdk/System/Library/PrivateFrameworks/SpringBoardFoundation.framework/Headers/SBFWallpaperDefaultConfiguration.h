/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, SBFGradient, UIColor;

@interface SBFWallpaperDefaultConfiguration : NSObject

{
    long long _wallpaperType;
    NSURL *_staticImageURL;
    NSURL *_videoURL;
    NSString *_proceduralWallpaperIdentifier;
    NSDictionary *_proceduralWallpaperOptions;
    UIColor *_wallpaperColor;
    NSString *_wallpaperColorName;
    SBFGradient *_wallpaperGradient;
}

@property (nonatomic, readonly) long long wallpaperType;
@property (copy, nonatomic, readonly) NSURL *staticImageURL;
@property (copy, nonatomic, readonly) NSURL *videoURL;
@property (copy, nonatomic, readonly) NSString *proceduralWallpaperIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *proceduralWallpaperOptions;
@property (copy, nonatomic, readonly) UIColor *wallpaperColor;
@property (copy, nonatomic, readonly) NSString *wallpaperColorName;
@property (copy, nonatomic, readonly) SBFGradient *wallpaperGradient;
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
- (id)initProceduralWithIdentifier:(id)arg1 options:(id)arg2;
- (id)initVideoWithStaticImageURL:(id)arg1 videoURL:(id)arg2;
- (id)initStaticWithImageURL:(id)arg1;
- (id)initColorWithColorName:(id)arg1;
- (id)initColorWithColor:(id)arg1;
- (id)initGradientWithGradient:(id)arg1;

@end
