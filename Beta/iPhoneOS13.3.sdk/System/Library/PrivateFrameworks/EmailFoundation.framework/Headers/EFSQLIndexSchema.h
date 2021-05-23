/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol EFSQLExpressable;

@interface EFSQLIndexSchema : NSObject

{
    _Bool _unique;
    NSString *_name;
    NSString *_tableName;
    NSArray *_indexedColumns;
    id <EFSQLExpressable> _where;
}

@property (copy, nonatomic, readonly) NSArray *indexedColumns;
@property (nonatomic, readonly) id <EFSQLExpressable> where;
@property (nonatomic, readonly) _Bool unique;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *tableName;

- (id)initWithTableName:(id)arg1 indexedColumns:(id)arg2;
- (id)definitionWithDatabaseName:(id)arg1;
- (id)initWithTableName:(id)arg1 columnNames:(id)arg2;
- (id)initWithTableName:(id)arg1 columnNames:(id)arg2 where:(id)arg3 unique:(_Bool)arg4;
- (id)initWithName:(id)arg1 tableName:(id)arg2 indexedColumns:(id)arg3 where:(id)arg4 unique:(_Bool)arg5;
- (id)initWithTableName:(id)arg1 indexedColumns:(id)arg2 where:(id)arg3 unique:(_Bool)arg4;

@end
