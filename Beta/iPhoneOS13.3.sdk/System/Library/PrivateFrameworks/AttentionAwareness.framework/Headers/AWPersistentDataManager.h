/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWPersistentDataManager : NSObject

{
    void *_shm_obj;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _loadAbsTime;
}

+ (id)sharedManager;
+ (void)initAWPersistentDataHeader:(CDStruct_89f0e72b *)arg1;
+ (_Bool)validateAWPersistentDataHeader:(CDStruct_89f0e72b *)arg1;
+ (_Bool)truncateAWPersistentData:(int *)arg1 error:(id *)arg2;
+ (_Bool)AWPersistentDataExists:(int *)arg1;

- (id)init;
- (void)loadPersistentData;
- (_Bool)checkPreconditions:(id *)arg1;
- (_Bool)isValidIndexForConnection:(id)arg1 index:(int)arg2 error:(id *)arg3;
- (int)nextFreeIndex;
- (int)openWithConnection:(id)arg1 error:(id *)arg2;
- (_Bool)closeWithConnection:(id)arg1 index:(int)arg2 error:(id *)arg3;
- (CDStruct_264b1ab3 *)clientStateWithConnection:(id)arg1 index:(int)arg2 error:(id *)arg3;

@end
