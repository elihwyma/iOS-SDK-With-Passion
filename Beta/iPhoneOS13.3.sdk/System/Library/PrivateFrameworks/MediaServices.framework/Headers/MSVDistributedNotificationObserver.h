/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol MSVDistributedNotificationObserverDelegate, OS_dispatch_queue;

@interface MSVDistributedNotificationObserver : NSObject

{
    int _notifyToken;
    NSString *_distributedName;
    NSString *_localName;
    NSObject<OS_dispatch_queue> *_queue;
    id <MSVDistributedNotificationObserverDelegate> _delegate;
    NSDictionary *_userInfoForLocalNotification;
}

@property (nonatomic, readonly) NSString *distributedName;
@property (nonatomic, readonly) NSString *localName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <MSVDistributedNotificationObserverDelegate> delegate;
@property (copy, nonatomic) NSDictionary *userInfoForLocalNotification;

+ (id)observerWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3;

- (id)init;
- (void)dealloc;
- (int)notifyToken;
- (id)initWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3;
- (void)_handleDistributedNotificationWithNotifyToken:(int)arg1;

@end
