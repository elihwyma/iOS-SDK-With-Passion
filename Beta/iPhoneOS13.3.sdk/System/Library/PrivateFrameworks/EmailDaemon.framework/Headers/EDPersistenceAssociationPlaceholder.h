/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EFSQLColumnSchema, NSString;

@interface EDPersistenceAssociationPlaceholder : NSObject

{
    EFSQLColumnSchema *_column;
    NSString *_tableName;
}

@property (nonatomic, readonly) EFSQLColumnSchema *column;
@property (copy, nonatomic, readonly) NSString *tableName;

- (id)description;
- (id)initWithColumn:(id)arg1 tableName:(id)arg2;
- (_Bool)resolveWithSchema:(id)arg1;

@end
