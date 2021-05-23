/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface PXMemoriesSeenHelper : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultHelper;

- (id)init;
- (void)clearAnyPendingNotificationsFromMemories:(id)arg1 inLibrary:(id)arg2;
- (void)clearAnyPendingStateFromMemories:(id)arg1 inLibrary:(id)arg2;
- (void)_clearPendingNotificationForMemory:(id)arg1 inLibrary:(id)arg2;

@end
