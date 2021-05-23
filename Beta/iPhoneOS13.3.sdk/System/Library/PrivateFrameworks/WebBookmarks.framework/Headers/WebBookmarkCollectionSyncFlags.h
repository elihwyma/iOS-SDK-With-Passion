/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebBookmarkCollectionSyncFlags : NSObject

{
    _Bool _syncAllowed;
    _Bool _postSyncNotificationWhenUnlocking;
    _Bool _unlockSyncRequested;
    int _syncLockFileDescriptor;
    long long _syncNotificationType;
    NSMutableSet *_lockSyncHoldRequestorPointers;
}

@property (nonatomic, readonly) _Bool syncAllowed;
@property (nonatomic) int syncLockFileDescriptor;
@property (nonatomic) long long syncNotificationType;
@property (nonatomic) _Bool postSyncNotificationWhenUnlocking;
@property (nonatomic, readonly) NSMutableSet *lockSyncHoldRequestorPointers;
@property (nonatomic) _Bool unlockSyncRequested;

- (id)initWithSyncAllowed:(_Bool)arg1;

@end
