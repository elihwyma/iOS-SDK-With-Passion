/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3AggregateQuery, ML3MusicLibrary, ML3Predicate, NSArray, NSString;

@interface ML3Query : NSObject

{
    ML3MusicLibrary *_library;
    Class _entityClass;
    ML3Predicate *_predicate;
    NSArray *_orderingTerms;
    NSString *_propertyToCount;
    ML3AggregateQuery *_nonDirectAggregateQuery;
    _Bool _usingSections;
    long long _options;
    _Bool _filtersOnDynamicProperties;
    unsigned long long _limit;
}

@property (nonatomic, readonly) NSString *selectPersistentIDsSQL;
@property (nonatomic, readonly) NSString *selectCountSQL;
@property (nonatomic, readonly) NSString *persistentIDProperty;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) ML3Predicate *predicate;
@property (nonatomic, readonly) ML3Predicate *predicateIncludingSystemwidePredicates;
@property (nonatomic, readonly) NSArray *orderingTerms;
@property (nonatomic, readonly) NSString *propertyToCount;
@property (nonatomic, readonly) _Bool hasEntities;
@property (nonatomic, readonly) long long anyEntityPersistentID;
@property (nonatomic, readonly) unsigned long long countOfEntities;
@property (nonatomic, readonly) ML3AggregateQuery *nonDirectAggregateQuery;
@property (nonatomic, readonly) NSString *sectionProperty;
@property (nonatomic, readonly) _Bool usingSections;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) _Bool ignoreSystemFilterPredicates;
@property (nonatomic) _Bool ignoreRestrictionsPredicates;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) _Bool filtersOnDynamicProperties;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sections;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(_Bool)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7 options:(long long)arg8;
- (void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(_Bool)arg4 cancelHandler:(CDUnknownBlockType)arg5;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned long long)arg3;
- (id)persistentIDParameters;
- (_Bool)hasRowForColumn:(id)arg1;
- (unsigned long long)countOfDistinctRowsForColumn:(id)arg1;
- (_Bool)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1;
- (id)selectSectionsSQL;
- (id)sectionsParameters;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(_Bool)arg2 sectionProperty:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)nameOrderPropertyForProperty:(id)arg1;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(_Bool)arg5 distinct:(_Bool)arg6 limit:(unsigned long long)arg7;
- (_Bool)sectionsPersistentIDColumnIsDistinct;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 limit:(unsigned long long)arg4;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2 distinct:(_Bool)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(_Bool)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(_Bool)arg3;
- (id)reverseQuery;
- (_Bool)deleteAllEntitiesFromLibrary;
- (_Bool)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2;
- (void)enumeratePersistentIDsAndSectionsWithProperty:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(_Bool)arg5;
- (id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2;
- (id)selectUnorderedPersistentIDsSQL;
- (id)countStatementParameters;

@end
