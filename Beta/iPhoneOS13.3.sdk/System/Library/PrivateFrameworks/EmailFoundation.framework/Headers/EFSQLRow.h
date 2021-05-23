/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class EFSQLPreparedStatement, NSDictionary;

@interface EFSQLRow : NSObject

{
    _Bool _namedColumnsInitialized;
    struct sqlite3_stmt *_statement;
    EFSQLPreparedStatement *_preparedStatement;
    NSDictionary *_columns;
    unsigned long long _columnCount;
}

@property (nonatomic, readonly) struct sqlite3_stmt *statement;
@property (retain, nonatomic) EFSQLPreparedStatement *preparedStatement;
@property (nonatomic, readonly) NSDictionary *columns;
@property (nonatomic) _Bool namedColumnsInitialized;
@property (nonatomic) unsigned long long columnCount;

- (id)debugDescription;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)_queryString;
- (_Bool)columnExistsWithName:(id)arg1;
- (id)columnNames;
- (id)initWithPreparedStatement:(id)arg1;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg1;
- (id)initWithColumns:(id)arg1;
- (_Bool)columnExistsAtIndex:(unsigned long long)arg1;

@end
