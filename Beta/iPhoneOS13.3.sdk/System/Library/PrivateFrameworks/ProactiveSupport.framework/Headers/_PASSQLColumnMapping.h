/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASSQLColumnMapping : NSObject

{
    struct sqlite3_stmt *_stmt;
    const struct _PASCompactStringArray *_tableColumnNamesFromSchema;
    const struct _PASCompactStringArray *_columnAliases;
    const char *_uniqueTableName;
}

- (void)dealloc;
- (id)initWithStatementPtr:(struct sqlite3_stmt *)arg1;
- (void)resetSearchHint;
- (void)_ensureColumnMappingExists;
- (int)indexForColumnName:(const char *)arg1 table:(const char *)arg2;
- (int)indexForColumnAlias:(const char *)arg1;

@end
