/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFWallpaperDefaultConfiguration;

@interface SBFWallpaperDefaultConfigurationSet : NSObject

{
    SBFWallpaperDefaultConfiguration *_lockScreenDefaultWallpaperConfiguration;
    SBFWallpaperDefaultConfiguration *_homeScreenDefaultWallpaperConfiguration;
}

@property (nonatomic, readonly) SBFWallpaperDefaultConfiguration *lockScreenDefaultWallpaperConfiguration;
@property (nonatomic, readonly) SBFWallpaperDefaultConfiguration *homeScreenDefaultWallpaperConfiguration;
@property (nonatomic, readonly) _Bool variantsShareDefaultWallpaperConfiguration;
@property (nonatomic, readonly) SBFWallpaperDefaultConfiguration *sharedDefaultWallpaperConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)defaultWallpaperDictionary;
+ (id)defaultWallpaperConfigurationSetFromDefaultWallpaperDictionary:(id)arg1;
+ (id)defaultWallpaperBaseURL;
+ (id)defaultWallpaperConfigurationSetFromDirectoryURL:(id)arg1;
+ (id)defaultWallpaperConfigurationFromWallpaperDictionary:(id)arg1;
+ (id)verifiedPNGOrJPEGURLForImageName:(id)arg1 inDirectory:(id)arg2;
+ (id)verifiedVideoURLForBaseName:(id)arg1 inDirectory:(id)arg2;
+ (id)systemDefaultConfigurationSet;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithSharedDefaultWallpaperConfiguration:(id)arg1;
- (id)initWithLockDefaultWallpaperConfiguration:(id)arg1 homeDefaultWallpaperConfiguration:(id)arg2;
- (id)defaultWallpaperConfigurationForVariant:(long long)arg1;

@end
