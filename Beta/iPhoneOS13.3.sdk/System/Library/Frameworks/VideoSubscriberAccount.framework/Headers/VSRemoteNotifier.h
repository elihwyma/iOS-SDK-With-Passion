/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSDistributedNotificationCenter, NSString;

@protocol VSRemoteNotifierDelegate;

@interface VSRemoteNotifier : NSObject

{
    NSString *_remoteNotificationName;
    id <VSRemoteNotifierDelegate> _delegate;
    NSString *_notificationObject;
    NSDistributedNotificationCenter *_distributedNotificationCenter;
}

@property (copy, nonatomic) NSString *notificationObject;
@property (retain, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (copy, nonatomic, readonly) NSString *remoteNotificationName;
@property (weak, nonatomic) id <VSRemoteNotifierDelegate> delegate;

+ (id)_currentProcessIdentifier;

- (id)init;
- (void)dealloc;
- (void)postNotification;
- (void)_didReceiveDistributedNotification:(id)arg1;
- (void)postNotificationWithUserInfo:(id)arg1;
- (id)initWithNotificationName:(id)arg1;

@end
