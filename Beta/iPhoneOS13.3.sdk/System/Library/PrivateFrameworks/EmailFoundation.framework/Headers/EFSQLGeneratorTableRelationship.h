/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class EFSQLColumnSchema, EFSQLTableSchema;

@interface EFSQLGeneratorTableRelationship : NSObject

{
    EFSQLTableSchema *_table;
    EFSQLColumnSchema *_sourceColumn;
    EFSQLTableSchema *_targetTable;
    unsigned long long _relationship;
}

@property (nonatomic, readonly) EFSQLTableSchema *table;
@property (nonatomic, readonly) EFSQLColumnSchema *sourceColumn;
@property (nonatomic, readonly) EFSQLTableSchema *targetTable;
@property (nonatomic, readonly) unsigned long long relationship;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToTableRelationship:(id)arg1;
- (id)initWithPropertyMapper:(id)arg1 previousTable:(id)arg2;

@end
