/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@protocol WLKNotificationCenterDelegate, WLKNotificationsImpl;

@interface WLKNotificationCenter : NSObject

{
    id <WLKNotificationsImpl> _impl;
    id <WLKNotificationCenterDelegate> _delegate;
}

@property (weak, nonatomic) id <WLKNotificationCenterDelegate> delegate;

+ (id)defaultCenter;

- (id)init;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (_Bool)isCategoryEnabledByUser:(long long)arg1;

@end
