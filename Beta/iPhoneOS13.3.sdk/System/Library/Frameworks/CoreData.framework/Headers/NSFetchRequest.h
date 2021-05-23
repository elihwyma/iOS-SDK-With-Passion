/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreRequest.h>

#import <CoreData/Swift-Protocol.h>

@class NSArray, NSEntityDescription, NSPredicate, NSString;

@interface NSFetchRequest : NSPersistentStoreRequest <Swift>

{
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    id *_additionalPrivateIvars;
    NSArray *_valuesToFetch;
    NSEntityDescription *_entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _batchSize;
    unsigned long long _fetchLimit;
    unsigned long long _allocationSize;
    NSArray *_relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags {
        unsigned int distinctValuesOnly:1;
        unsigned int includesSubentities:1;
        unsigned int includesPropertyValues:1;
        unsigned int resultType:3;
        unsigned int returnsObjectsAsFaults:1;
        unsigned int excludePendingChanges:1;
        unsigned int isInUse:1;
        unsigned int entityIsName:1;
        unsigned int refreshesRefetched:1;
        unsigned int propertiesValidated:1;
        unsigned int expressionsValidated:1;
        unsigned int disableCaching:1;
        unsigned int allocationType:3;
        unsigned int _RESERVED:15;
    } _flags;
}

@property (retain, nonatomic) NSEntityDescription *entity;
@property (nonatomic, readonly) NSString *entityName;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long fetchLimit;
@property (retain, nonatomic) NSArray *affectedStores;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic) _Bool includesSubentities;
@property (nonatomic) _Bool includesPropertyValues;
@property (nonatomic) _Bool returnsObjectsAsFaults;
@property (copy, nonatomic) NSArray *relationshipKeyPathsForPrefetching;
@property (nonatomic) _Bool includesPendingChanges;
@property (nonatomic) _Bool returnsDistinctResults;
@property (copy, nonatomic) NSArray *propertiesToFetch;
@property (nonatomic) unsigned long long fetchOffset;
@property (nonatomic) unsigned long long fetchBatchSize;
@property (nonatomic) _Bool shouldRefreshRefetchedObjects;
@property (copy, nonatomic) NSArray *propertiesToGroupBy;
@property (retain, nonatomic) NSPredicate *havingPredicate;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (_Bool)accessInstanceVariablesDirectly;
+ (id)fetchRequestWithEntityName:(id)arg1;
+ (id)_newDenormalizedFetchProperties:(id)arg1;
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasChanges;
- (id)initWithEntityName:(id)arg1;
- (void)setAllocationType:(unsigned long long)arg1;
- (void)setGroupByProperties:(id)arg1;
- (id)groupByProperties;
- (unsigned long long)requestType;
- (id)execute:(id *)arg1;
- (unsigned long long)allocationSize;
- (_Bool)_isEditable;
- (void)_setFlagsFromXPCEncoding:(id)arg1;
- (id)_XPCEncodedFlags;
- (id)_newNormalizedFetchProperties:(id)arg1;
- (id)encodeForXPC;
- (_Bool)_disablePersistentStoreResultCaching;
- (unsigned long long)allocationType;
- (void)_resolveEntityWithContext:(id)arg1;
- (void)_setDisablePersistentStoreResultCaching:(_Bool)arg1;
- (void)_throwIfNotEditable;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (id)_newValidatedProperties:(id)arg1 groupBy:(_Bool)arg2 error:(id *)arg3;
- (void)setAllocationSize:(unsigned long long)arg1;
- (void)_bindExpressionDescriptionProperties:(id)arg1;
- (_Bool)_isCachingFetchRequest;
- (void)_setAsyncResultHandle:(id)arg1;
- (id)_asyncResultHandle;
- (id)_copyForDirtyContext;
- (void)_incrementInUseCounter;
- (id)stores;

@end
