/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CKShareMetadata, FBSScene, FBSSceneSpecification, NSDictionary, NSSet, NSString, UIApplicationShortcutItem, UNNotificationResponse;

@interface UISceneConnectionOptions : NSObject

{
    NSDictionary *_launchOptionsDictionary;
    FBSScene *_fbsScene;
    FBSSceneSpecification *_specification;
}

@property (nonatomic, readonly) NSDictionary *_launchOptionsDictionary;
@property (weak, nonatomic, readonly) FBSScene *_fbsScene;
@property (weak, nonatomic, readonly) FBSSceneSpecification *_specification;
@property (copy, nonatomic, readonly) NSSet *URLContexts;
@property (nonatomic, readonly) NSString *sourceApplication;
@property (nonatomic, readonly) NSString *handoffUserActivityType;
@property (copy, nonatomic, readonly) NSSet *userActivities;
@property (nonatomic, readonly) UNNotificationResponse *notificationResponse;
@property (nonatomic, readonly) UIApplicationShortcutItem *shortcutItem;
@property (nonatomic, readonly) CKShareMetadata *cloudKitShareMetadata;

- (id)description;
- (id)_initWithConnectionOptionsContext:(id)arg1 fbsScene:(id)arg2 specification:(id)arg3;

@end
