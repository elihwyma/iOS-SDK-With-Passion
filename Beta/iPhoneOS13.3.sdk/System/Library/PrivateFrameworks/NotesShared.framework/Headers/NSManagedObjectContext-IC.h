/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface NSManagedObjectContext (IC)

@property (retain, nonatomic) NSString *ic_debugName;
@property (nonatomic, readonly) _Bool ic_isMainThreadContext;

- (_Bool)ic_save;
- (_Bool)ic_saveWithLogDescription:(id)arg1;
- (void)ic_performBlock:(CDUnknownBlockType)arg1 andPerformBlockOnMainThread:(CDUnknownBlockType)arg2;
- (void)ic_performBlockAndWait:(CDUnknownBlockType)arg1 andPerformBlockAndWaitOnMainThread:(CDUnknownBlockType)arg2;

@end
