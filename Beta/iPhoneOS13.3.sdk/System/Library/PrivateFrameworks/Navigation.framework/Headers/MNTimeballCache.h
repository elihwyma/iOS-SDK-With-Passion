/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOSQLiteDB;

@interface MNTimeballCache : NSObject

{
    GEOSQLiteDB *_db;
}

- (void)dealloc;
- (id)initWithDBFilePath:(id)arg1;
- (void)clearCache:(CDUnknownBlockType)arg1;
- (void)setRouteUpdate:(id)arg1 forDestination:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getEntriesUpdatedAfter:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getEntryForDestination:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setNextRefreshDate:(id)arg1 forDestination:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getEntriesScheduledForRefreshAfter:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)_setupDBWithDrop:(_Bool)arg1;
- (CDUnknownBlockType)_errorBlockWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_handleResult:(_Bool)arg1 forStatement:(id)arg2 error:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)deleteRouteUpdateForDestination:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pruneCache:(CDUnknownBlockType)arg1;

@end
