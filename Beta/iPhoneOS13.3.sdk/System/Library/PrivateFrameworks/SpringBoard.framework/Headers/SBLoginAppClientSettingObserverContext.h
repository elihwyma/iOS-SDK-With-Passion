/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBSUILoginUISceneClientSettings, UIApplicationSceneSettings;

@interface SBLoginAppClientSettingObserverContext : NSObject

{
    UIApplicationSceneSettings *_settings;
    SBSUILoginUISceneClientSettings *_updatedClientSettings;
}

@property (retain, nonatomic) UIApplicationSceneSettings *settings;
@property (retain, nonatomic) SBSUILoginUISceneClientSettings *updatedClientSettings;

@end
