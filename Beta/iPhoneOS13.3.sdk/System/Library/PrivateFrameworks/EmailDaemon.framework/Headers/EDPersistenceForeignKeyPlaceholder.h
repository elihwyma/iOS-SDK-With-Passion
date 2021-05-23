/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EFSQLColumnSchema, NSString;

@interface EDPersistenceForeignKeyPlaceholder : NSObject

{
    EFSQLColumnSchema *_column;
    NSString *_tableName;
    unsigned long long _deleteAction;
    unsigned long long _updateAction;
}

@property (nonatomic, readonly) EFSQLColumnSchema *column;
@property (copy, nonatomic, readonly) NSString *tableName;
@property (nonatomic, readonly) unsigned long long deleteAction;
@property (nonatomic, readonly) unsigned long long updateAction;

- (id)description;
- (id)initWithColumn:(id)arg1 tableName:(id)arg2 onDelete:(unsigned long long)arg3 onUpdate:(unsigned long long)arg4;
- (_Bool)resolveWithSchema:(id)arg1;
- (_Bool)resolveToStringForTableNames:(id)arg1;

@end
