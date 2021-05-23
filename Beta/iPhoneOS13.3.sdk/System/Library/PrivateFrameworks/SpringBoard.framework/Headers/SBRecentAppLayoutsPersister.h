/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSTimer, NSURL;

@protocol OS_dispatch_queue;

@interface SBRecentAppLayoutsPersister : NSObject

{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSURL *_persistenceURL;
    NSTimer *_persistTimer;
    _Bool _initializedNewStoreOnDisk;
    NSArray *_recents;
}

@property (retain, nonatomic) NSArray *recents;
@property (nonatomic, readonly) _Bool initializedNewStoreOnDisk;

- (void)_loadRecents;
- (id)_scheduledPersistTimer;
- (void)_enqueueDiskWrite;
- (void)_queue_writeCompressedProtobufRepresentationToDisk:(id)arg1;
- (void)_persistTimerExpired:(id)arg1;
- (id)initWithPersistenceURL:(id)arg1;
- (void)syncToDiskSoonIfDirty;
- (void)syncToDiskSynchronously;

@end
