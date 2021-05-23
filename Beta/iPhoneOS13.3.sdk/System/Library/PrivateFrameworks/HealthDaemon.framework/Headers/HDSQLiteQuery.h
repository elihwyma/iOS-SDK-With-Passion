/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLiteDatabase, HDSQLiteQueryDescriptor, NSString;

@interface HDSQLiteQuery : NSObject

{
    HDSQLiteDatabase *_database;
    HDSQLiteQueryDescriptor *_descriptor;
    NSString *_lastSQLStatement;
}

@property (readonly) HDSQLiteDatabase *database;
@property (readonly) HDSQLiteQueryDescriptor *queryDescriptor;
@property (copy, readonly) NSString *lastSQLStatement;

- (id)copySelectSQLWithProperties:(id)arg1;
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;
- (_Bool)enumeratePersistentIDsAndProperties:(id)arg1 error:(id *)arg2 enumerationHandler:(CDUnknownBlockType)arg3;
- (_Bool)enumerateProperties:(id)arg1 error:(id *)arg2 enumerationHandler:(CDUnknownBlockType)arg3;
- (_Bool)deleteAllEntitiesWithError:(id *)arg1;
- (void)enumerateEntitiesUsingBlock:(CDUnknownBlockType)arg1;

@end
