/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIApplicationSceneClientSettings.h>

@class NSString;

@interface SBSUILoginUISceneClientSettings : UIApplicationSceneClientSettings

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long idleTimerMode;
@property (copy, nonatomic, readonly) NSString *statusBarUserNameOverride;
@property (nonatomic, readonly) long long rotationMode;
@property (nonatomic, readonly) unsigned long long wallpaperMode;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
