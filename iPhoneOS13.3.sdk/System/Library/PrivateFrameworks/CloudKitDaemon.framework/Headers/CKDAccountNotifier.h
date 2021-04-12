//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject
{
    int _accountChangedToken;
    NSMapTable *_notificationHandlers;
    NSOperationQueue *_accountChangeHandlerQueue;
}

+ (id)sharedNotifier;
@property(retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue; // @synthesize accountChangeHandlerQueue=_accountChangeHandlerQueue;
@property(retain, nonatomic) NSMapTable *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(nonatomic) int accountChangedToken; // @synthesize accountChangedToken=_accountChangedToken;
// - (void).cxx_destruct;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(id /* CDUnknownBlockType */)arg2;
- (void)postAccountChangedNotificationToClients;
- (void)postAccountChangedNotificationWithAccountID:(id)arg1 changeType:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

