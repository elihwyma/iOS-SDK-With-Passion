/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLSQLiteDatabase : NSObject

{
    struct sqlite3 *_database;
}

+ (id)openDatabaseAtPath:(id)arg1;
+ (struct sqlite3 *)_openSQLiteDatabaseAtPath:(const char *)arg1;

- (_Bool)close;
- (_Bool)commitTransaction;
- (_Bool)rollbackTransaction;
- (id)initWithOpenedSQLite3Database:(struct sqlite3 *)arg1;
- (_Bool)beginDeferredTransaction;
- (_Bool)beginExclusiveTransaction;
- (_Bool)prepareAndEvaluateStatement:(id)arg1;
- (_Bool)prepareStatement:(id)arg1 andStepThroughResultsWithBlock:(CDUnknownBlockType)arg2;
- (struct sqlite3_stmt *)_prepareStatement:(id)arg1;
- (_Bool)_execute:(id)arg1;

@end
