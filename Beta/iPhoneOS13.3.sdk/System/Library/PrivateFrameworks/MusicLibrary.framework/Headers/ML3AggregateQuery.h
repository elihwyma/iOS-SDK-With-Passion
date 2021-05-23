/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Query.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query

{
    Class _aggregateEntityClass;
    NSString *_foreignPersistentIDProperty;
    _Bool _isFastCountable;
}

@property (nonatomic, readonly) Class aggregateEntityClass;
@property (nonatomic, readonly) NSString *foreignPersistentIDProperty;
@property (nonatomic) _Bool isFastCountable;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)entityClass;
- (unsigned long long)countOfEntities;
- (_Bool)hasEntities;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2;
- (id)persistentIDProperty;
- (_Bool)sectionsPersistentIDColumnIsDistinct;
- (id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3;

@end
