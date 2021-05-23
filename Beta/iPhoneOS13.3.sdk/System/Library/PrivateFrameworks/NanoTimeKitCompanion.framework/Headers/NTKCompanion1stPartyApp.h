/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCompanionApp.h>

@class NSString, UIImage;

@interface NTKCompanion1stPartyApp : NTKCompanionApp

{
    UIImage *_icon;
    unsigned long long _complicationType;
    NSString *_iconName;
}

@property (nonatomic) unsigned long long complicationType;
@property (copy, nonatomic) NSString *iconName;

+ (id)_allApps;
+ (id)companionAppWithAppInfo:(struct _NTKCompanion1stPartyInfo)arg1;
+ (id)appForBundleIdentifier:(id)arg1;
+ (id)allAppsForDevice:(id)arg1;
+ (_Bool)complicationType:(unsigned long long)arg1 mapsToRemovedSystemAppOnDevice:(id)arg2;

- (id)icon;
- (void)setIcon:(id)arg1;
- (id)complication;
- (id)initWithAppInfo:(struct _NTKCompanion1stPartyInfo)arg1;

@end
