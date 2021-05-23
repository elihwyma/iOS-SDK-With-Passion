/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSData, NSDictionary, NSString;

@interface SBWallpaperLegacyDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSString *homeScreenWallpaperIdentifier;
@property (retain, nonatomic) NSDictionary *homeScreenWallpaperOptions;
@property (nonatomic) _Bool homeScreenWallpaperWasUserSet;
@property (retain, nonatomic) NSString *lockScreenWallpaperIdentifier;
@property (retain, nonatomic) NSDictionary *lockScreenWallpaperOptions;
@property (nonatomic) _Bool lockScreenWallpaperWasUserSet;
@property (nonatomic) double homeScreenParallaxFactor;
@property (nonatomic) double homeScreenZoomScale;
@property (retain, nonatomic) NSString *homeScreenCropRectString;
@property (nonatomic) _Bool homeScreenSupportsCropping;
@property (nonatomic) _Bool homeScreenMagnifyEnabled;
@property (nonatomic) _Bool homeScreenPortrait;
@property (retain, nonatomic) NSString *homeScreenWallpaperName;
@property (nonatomic) double lockScreenParallaxFactor;
@property (nonatomic) double lockScreenZoomScale;
@property (retain, nonatomic) NSString *lockScreenCropRectString;
@property (nonatomic) _Bool lockScreenSupportsCropping;
@property (nonatomic) _Bool lockScreenMagnifyEnabled;
@property (nonatomic) _Bool lockScreenPortrait;
@property (nonatomic) _Bool lockScreenHasVideo;
@property (nonatomic) double lockScreenStillTimeInVideo;
@property (retain, nonatomic) NSString *lockScreenWallpaperName;
@property (retain, nonatomic) NSData *lockScreenColorData;
@property (retain, nonatomic) NSData *homeScreenColorData;
@property (retain, nonatomic) NSString *lockScreenColorName;
@property (retain, nonatomic) NSString *homeScreenColorName;
@property (retain, nonatomic) NSData *lockScreenImageHashData;
@property (retain, nonatomic) NSData *homeScreenImageHashData;
@property (retain, nonatomic) NSData *lockScreenGradientData;
@property (retain, nonatomic) NSData *homeScreenGradientData;

- (void)_bindAndRegisterDefaults;

@end
