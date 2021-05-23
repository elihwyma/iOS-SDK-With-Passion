/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIApplicationStarkSceneSpecification.h>

@interface SBSUIStarkNotificationsSceneSpecification : UIApplicationStarkSceneSpecification

- (_Bool)isUIKitManaged;
- (_Bool)isInternal;
- (Class)settingsClass;
- (Class)clientSettingsClass;
- (Class)transitionContextClass;
- (id)baseSettingsDiffActions;
- (id)baseActionHandlers;

@end
