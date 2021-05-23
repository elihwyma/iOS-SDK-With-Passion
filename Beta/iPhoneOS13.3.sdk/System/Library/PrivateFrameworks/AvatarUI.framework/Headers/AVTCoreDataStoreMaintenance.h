/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@protocol AVTEventCoalescer, AVTUILogger, OS_dispatch_queue;

@interface AVTCoreDataStoreMaintenance : NSObject

{
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <AVTEventCoalescer> _eventCoalescer;
    CDUnknownBlockType _mocFactory;
}

@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) id <AVTEventCoalescer> eventCoalescer;
@property (copy, nonatomic, readonly) CDUnknownBlockType mocFactory;

- (id)initWithWorkQueue:(id)arg1 managedObjectContextFactory:(CDUnknownBlockType)arg2 eventCoalescer:(id)arg3 logger:(id)arg4;
- (void)runMaintenanceTasks;
- (_Bool)mitigateDuplicatesWithManagedObjectContext:(id)arg1 error:(id *)arg2;
- (id)duplicatedIdentifiersInManagedObjectContext:(id)arg1 error:(id *)arg2;
- (id)fetchDuplicatedRecordsForIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (_Bool)fixDuplicateRecordIdentifiers:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (void)storeDidChange;
- (id)initWithEnvironment:(id)arg1 managedObjectContextFactory:(CDUnknownBlockType)arg2;

@end
