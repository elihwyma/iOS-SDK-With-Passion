/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface _DPDataProtectionMaster : NSObject

{
    _Bool _deviceFormatedForContentProtection;
    _Bool _notifyEnabled;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_availableState;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic, readonly) _Bool deviceFormatedForContentProtection;
@property (nonatomic, readonly) NSMutableDictionary *handlers;
@property (nonatomic, readonly) NSMutableDictionary *availableState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, readonly) _Bool notifyEnabled;

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
