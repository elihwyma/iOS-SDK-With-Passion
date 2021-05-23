/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLRelationship.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLManyToMany : NSSQLRelationship

{
    NSString *_correlationTableName;
    NSString *_columnName;
    NSString *_orderColumnName;
}

- (void)dealloc;
- (id)inverseManyToMany;
- (id)columnName;
- (id)correlationTableName;
- (_Bool)isReflexive;
- (id)inverseColumnName;
- (id)inverseOrderColumnName;
- (id)orderColumnName;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)_setColumnName:(id)arg1;
- (void)_setInverseManyToMany:(id)arg1;
- (_Bool)isMaster;
- (unsigned char)columnSQLType;
- (unsigned char)orderColumnSQLType;
- (void)_setCorrelationTableName:(id)arg1;
- (void)_setOrderColumnName:(id)arg1;
- (_Bool)isTableSchemaEqual:(id)arg1;

@end
