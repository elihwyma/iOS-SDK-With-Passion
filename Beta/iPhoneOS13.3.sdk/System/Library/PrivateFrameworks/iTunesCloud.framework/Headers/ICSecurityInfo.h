/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface ICSecurityInfo : NSObject

{
    _Bool _hasLoadedDeviceClassCUnlocked;
    _Bool _isDeviceClassCUnlocked;
    _Bool _hasLoadedContentProtectionEnabled;
    _Bool _isContentProtectionEnabled;
    int _firstUnlockNotificationToken;
    NSMutableArray *_pendingFirstUnlockBlocks;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (nonatomic, readonly, getter=isContentProtectionEnabled) _Bool contentProtectionEnabled;
@property (nonatomic, readonly, getter=isDeviceUnlocked) _Bool deviceUnlocked;
@property (nonatomic, readonly, getter=isDeviceClassCUnlocked) _Bool deviceClassCUnlocked;

+ (id)sharedSecurityInfo;

- (id)init;
- (void)dealloc;
- (void)performBlockAfterFirstUnlock:(CDUnknownBlockType)arg1;
- (void)_getContentProtectionEnabled:(_Bool *)arg1 isDeviceClassCUnlocked:(_Bool *)arg2;
- (void)_loadContentProtectionEnabled:(_Bool)arg1 isDeviceClassCUnlocked:(_Bool)arg2;
- (void)_processFirstUnlockNotification;

@end
