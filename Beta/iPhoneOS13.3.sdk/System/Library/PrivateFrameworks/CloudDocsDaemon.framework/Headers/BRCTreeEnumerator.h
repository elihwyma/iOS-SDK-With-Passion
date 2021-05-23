/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCAppLibrary, BRCItemID, NSMutableIndexSet, brc_task_tracker;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface BRCTreeEnumerator : NSObject

{
    BRCAccountSession *_session;
    CDUnknownBlockType _handler;
    BRCItemID *_parentID;
    BRCAppLibrary *_appLibrary;
    unsigned long long _rowID;
    NSMutableIndexSet *_seen;
    NSMutableIndexSet *_toVisit;
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_group> *_group;
    id _strongSelf;
    _Bool _isCancelled;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)cancel;
- (id)initWithSession:(id)arg1;
- (_Bool)finishIfCancelled;
- (void)enumerateBelow:(id)arg1 appLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_scheduleAsync;
- (void)_doneWithError:(id)arg1;
- (void)_iterate:(unsigned long long)arg1;
- (unsigned long long)__iterate:(unsigned long long)arg1;
- (_Bool)_visitNewParent;
- (id)initWithSession:(id)arg1 tracker:(id)arg2;
- (id)initWithSession:(id)arg1 group:(id)arg2;

@end
