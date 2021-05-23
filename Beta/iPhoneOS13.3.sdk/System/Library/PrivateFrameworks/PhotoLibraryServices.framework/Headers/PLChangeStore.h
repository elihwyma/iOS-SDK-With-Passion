/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSURL, PLPhotoLibraryPathManager;

@protocol OS_dispatch_queue;

@interface PLChangeStore : NSObject

{
    NSObject<OS_dispatch_queue> *_eventsIsolation;
    NSMutableArray *_events;
    struct sqlite3 *_database;
    NSObject<OS_dispatch_queue> *_databaseIsolation;
    unsigned long long _firstOnDiskEventIndex;
    PLPhotoLibraryPathManager *_photoLibraryPathManager;
    NSURL *_databaseFileURL;
}

@property (nonatomic, readonly) unsigned long long firstOnDiskEventIndex;
@property (nonatomic, readonly) NSURL *databaseFileURL;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *photoLibraryPathManager;

- (void)dealloc;
- (unsigned long long)lastIndex;
- (struct sqlite3_stmt *)prepareStatement:(const char *)arg1;
- (void)openDatabase;
- (void)prepareAndEvaluateStatement:(const char *)arg1;
- (id)initWithPhotoLibraryPathManager:(id)arg1;
- (void)getEventsSinceIndex:(unsigned long long)arg1 filteredBy:(CDUnknownBlockType)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)clearStore:(CDUnknownBlockType)arg1;
- (_Bool)getInMemoryEventsSinceIndex:(unsigned long long)arg1 filteredBy:(CDUnknownBlockType)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)newArrayWithEventsSince:(unsigned long long)arg1 filteredBy:(CDUnknownBlockType)arg2 lastEventIndex:(unsigned long long *)arg3;
- (void)getOnDiskEventsSinceIndex:(unsigned long long)arg1 filteredBy:(CDUnknownBlockType)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)enumeratePersistedDidSaveEventsInRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setupDatabase;
- (void)performBlockAsTransaction:(CDUnknownBlockType)arg1;
- (void)bindInt:(int)arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)bindInt64:(long long)arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)bindXPCData:(id)arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)bindString:(id)arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)bindUUID:(unsigned char [16])arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)_backupStore;
- (void)_clearStore;

@end
