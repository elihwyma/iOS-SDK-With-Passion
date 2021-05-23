/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject

{
    int _accountChangedToken;
    NSMapTable *_notificationHandlers;
    NSOperationQueue *_accountChangeHandlerQueue;
}

@property (nonatomic) int accountChangedToken;
@property (retain, nonatomic) NSMapTable *notificationHandlers;
@property (retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue;

+ (id)sharedNotifier;

- (id)init;
- (void)dealloc;
- (void)postAccountChangedNotificationWithAccountID:(id)arg1 changeType:(long long)arg2;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(CDUnknownBlockType)arg2;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;
- (void)postAccountChangedNotificationToClients;

@end
