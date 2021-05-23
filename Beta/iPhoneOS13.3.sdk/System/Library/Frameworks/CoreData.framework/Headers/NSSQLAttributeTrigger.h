/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableString, NSPredicate, NSSQLAttribute, NSSQLEntity, NSSQLRelationship, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLAttributeTrigger : NSObject

{
    NSPredicate *_predicate;
    NSString *_predicateString;
    NSSQLEntity *_entity;
    NSSQLAttribute *_attribute;
    NSSQLRelationship *_relationship;
    NSSQLEntity *_destinationEntity;
    NSArray *_destinationAttributes;
    NSMutableString *_mToManyInnerFetchWhereClause;
    NSMutableString *_mToManyDecrementWhenClause;
    NSMutableString *_mToManyIncrementWhenClause;
    NSMutableString *_mOfClause;
    NSMutableString *_mOldMatchingClause;
    NSMutableString *_mNewMatchingClause;
    NSMutableString *_mColumnChangedClause;
    NSMutableArray *_mSqlDropStrings;
    NSMutableArray *_mBulkChangeStrings;
    NSArray *_insertSQLStrings;
}

@property (readonly) NSSQLEntity *entity;
@property (readonly) NSSQLAttribute *attribute;
@property (readonly) NSString *predicateString;
@property (readonly) NSPredicate *predicate;
@property (readonly) NSSQLRelationship *relationship;
@property (readonly) NSSQLEntity *destinationEntity;
@property (readonly) NSArray *destinationAttributes;
@property (readonly) NSString *toManyInnerFetchWhereClause;
@property (readonly) NSString *toManyDecrementWhenClause;
@property (readonly) NSString *toManyIncrementWhenClause;
@property (readonly) NSString *ofClause;
@property (readonly) NSString *oldMatchingClause;
@property (readonly) NSString *newMatchingClause;
@property (readonly) NSString *columnChangedClause;
@property (nonatomic, readonly) NSArray *insertSQLStrings;
@property (nonatomic, readonly) NSArray *dropSQLStrings;
@property (nonatomic, readonly) NSArray *bulkUpdateSQLStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)validate:(id *)arg1;
- (_Bool)parseTriggerPredicateError:(id *)arg1;
- (_Bool)validatePredicate:(id)arg1 error:(id *)arg2;
- (id)createSQLStrings:(id *)arg1;
- (_Bool)validateComparisonPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)isSupportedOperatorType:(unsigned long long)arg1;
- (id)inverseOperatorSymbolForOperator:(id)arg1;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
- (_Bool)isEqualToExtension:(id)arg1;

@end
