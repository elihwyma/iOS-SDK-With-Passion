/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSString;

@protocol SFSQLiteDelegate;

@interface SFSQLite : NSObject

{
    id <SFSQLiteDelegate> _delegate;
    NSString *_path;
    NSString *_schema;
    NSString *_schemaVersion;
    NSMutableDictionary *_statementsBySQL;
    NSString *_objectClassPrefix;
    long long _synchronousMode;
    int _userVersion;
    struct sqlite3 *_db;
    unsigned long long _openCount;
    NSDateFormatter *_dateFormatter;
    _Bool _hasMigrated;
    _Bool _corrupt;
    _Bool _traced;
    NSDateFormatter *_oldDateFormatter;
}

@property (nonatomic) struct sqlite3 *db;
@property (nonatomic) unsigned long long openCount;
@property (nonatomic) _Bool corrupt;
@property (nonatomic, readonly) NSMutableDictionary *statementsBySQL;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateFormatter *oldDateFormatter;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *schema;
@property (nonatomic, readonly) NSString *schemaVersion;
@property (retain, nonatomic) NSString *objectClassPrefix;
@property (nonatomic) int userVersion;
@property (nonatomic) long long synchronousMode;
@property (nonatomic, readonly) _Bool isOpen;
@property (nonatomic, readonly) _Bool hasMigrated;
@property (nonatomic) _Bool traced;
@property (retain, nonatomic) id <SFSQLiteDelegate> delegate;

- (void)dealloc;
- (void)open;
- (void)close;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)remove;
- (int)changes;
- (void)end;
- (id)initWithPath:(id)arg1 schema:(id)arg2;
- (id)_synchronousModeString;
- (id)_createSchemaHash;
- (void)attemptProperDatabasePermissions;
- (_Bool)openWithError:(id *)arg1;
- (void)begin;
- (void)rollback;
- (void)analyze;
- (void)vacuum;
- (long long)lastInsertRowID;
- (_Bool)executeSQL:(id)arg1;
- (_Bool)executeSQL:(id)arg1 arguments:(char *)arg2;
- (id)statementForSQL:(id)arg1;
- (void)removeAllStatements;
- (id)allTableNames;
- (void)dropAllTables;
- (id)datePropertyForKey:(id)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)removePropertyForKey:(id)arg1;
- (id)creationDate;
- (id)columnNamesForTable:(id)arg1;
- (id)select:(id)arg1 from:(id)arg2;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 block:(CDUnknownBlockType)arg7;
- (void)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(CDUnknownBlockType)arg6;
- (id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (void)update:(id)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 limit:(id)arg5;
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;
- (void)deleteFrom:(id)arg1 matchingValues:(id)arg2;
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)_tableNameForClass:(Class)arg1;
- (int)dbUserVersion;
- (int)autoVacuumSetting;

@end
