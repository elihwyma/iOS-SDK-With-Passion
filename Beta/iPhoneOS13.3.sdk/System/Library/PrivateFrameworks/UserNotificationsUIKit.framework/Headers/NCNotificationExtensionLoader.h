/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationExtensionLoader : NSObject

{
    NSMutableDictionary *_loadedHostViewControllerCache;
}

@property (retain, nonatomic) NSMutableDictionary *loadedHostViewControllerCache;

+ (id)sharedInstance;

- (id)init;
- (void)clearCacheForNotificationRequest:(id)arg1;
- (void)loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_loadViewControllerForExtension:(id)arg1 notificationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
