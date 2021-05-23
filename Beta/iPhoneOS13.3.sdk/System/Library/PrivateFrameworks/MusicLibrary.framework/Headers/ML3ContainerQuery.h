/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Query.h>

@class ML3Container, ML3Predicate, NSArray;

@interface ML3ContainerQuery : ML3Query

{
    ML3Predicate *_containerPredicate;
    ML3Container *_container;
    NSArray *_limitedPersistentIDs;
}

@property (nonatomic, readonly) NSArray *limitedPersistentIDs;
@property (nonatomic, readonly) ML3Container *container;
@property (nonatomic, readonly) _Bool requiresSmartLimiting;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;
- (unsigned long long)countOfEntities;
- (_Bool)hasEntities;
- (unsigned long long)countOfDistinctRowsForColumn:(id)arg1;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4;
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(_Bool)arg2;

@end
