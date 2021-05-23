/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCItemTransmogrifier : NSObject

{
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_pendingRenamesTimer;
    NSMutableArray *_pendingRenames;
    NSOperationQueue *_queue;
    NSMutableDictionary *_pendingTransmogirifcations;
}

- (id)queue;
- (id)initWithSession:(id)arg1;
- (_Bool)addOperation:(id)arg1 forItem:(id)arg2;
- (void)removeOperationsForItem:(id)arg1;
- (void)_finishDirectoryToPackageTransmogrification:(id)arg1 relpath:(id)arg2;
- (double)_renameDelayForZone:(id)arg1;
- (double)_renameItem:(id)arg1;
- (void)_scheduleRenameAfter:(double)arg1 onQueue:(id)arg2;
- (void)_renameItems;
- (void)scheduleDirectoryToPackageTransmogrification:(id)arg1 absolutePath:(id)arg2;
- (void)scheduleBouncedDirectoryRename:(id)arg1;

@end
