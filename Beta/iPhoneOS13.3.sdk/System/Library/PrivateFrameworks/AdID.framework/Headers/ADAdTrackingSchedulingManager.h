/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <Foundation/NSObject.h>

@class APSConnection, NSString;

@protocol NSObject;

@interface ADAdTrackingSchedulingManager : NSObject

{
    _Bool _isConfigRequestInFlight;
    id <NSObject> _storeFrontNotifyToken;
    id <NSObject> _accountChangedNotifyToken;
    APSConnection *_pushConnection;
}

@property (retain, nonatomic) id <NSObject> storeFrontNotifyToken;
@property (retain, nonatomic) id <NSObject> accountChangedNotifyToken;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (nonatomic) _Bool isConfigRequestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (_Bool)isAdEnabledLocality;
- (void)handleAccountChange;
- (void)refreshConfiguration:(CDUnknownBlockType)arg1;
- (void)runOnFirstUnlock:(CDUnknownBlockType)arg1;
- (void)registerForLockStateNotification;
- (void)handleConfiguration;
- (void)pushEnable;
- (void)forceExpiration;
- (id)currentBundleID;
- (void)pushDisable;

@end
