/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSStoreMapping.h>

@class NSArray, NSDictionary, NSEntityDescription, NSString;

__attribute__((visibility("hidden")))
@interface NSEntityStoreMapping : NSStoreMapping

{
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    _Bool _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)setEntity:(id)arg1;
- (id)entity;
- (id)attributeMappings;
- (id)relationshipMappings;
- (void)setPropertyMappings:(id)arg1;
- (void)setPrimaryKeys:(id)arg1;
- (void)setSingleTableEntity:(_Bool)arg1;
- (void)setSubentityColumn:(id)arg1;
- (void)setSubentityID:(unsigned int)arg1;
- (id)propertyMappings;
- (id)primaryKeys;
- (_Bool)isSingleTableEntity;
- (id)subentityColumn;
- (unsigned int)subentityID;
- (id)primaryKeyColumnDefinitions;
- (id)attributeColumnDefinitions;
- (id)foreignKeyColumnDefinitions;
- (id)foreignKeyConstraintDefinitions;
- (id)initWithEntity:(id)arg1;
- (id)createTableStatement;

@end
