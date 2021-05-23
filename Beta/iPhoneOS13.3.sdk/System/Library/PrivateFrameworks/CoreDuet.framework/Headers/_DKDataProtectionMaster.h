/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface _DKDataProtectionMaster : NSObject

{
    NSMutableDictionary *_handlers;
    _Bool _deviceFormatedForContentProtection;
    NSMutableDictionary *_availableState;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    _Bool _notifyEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)isDataAvailableFor:(id)arg1;
- (_Bool)isDataAvailableForClassA;
- (_Bool)isDataAvailableForClassC;
- (void)handleKeyBagLockNotification;
- (_Bool)deviceHasBeenUnlockedSinceBoot;
- (_Bool)deviceIsPasswordConfigured;
- (_Bool)deviceIsLocked;
- (id)registerStateChangeHandler:(CDUnknownBlockType)arg1;
- (void)deregisterStateChangeHandler:(id)arg1;

@end
