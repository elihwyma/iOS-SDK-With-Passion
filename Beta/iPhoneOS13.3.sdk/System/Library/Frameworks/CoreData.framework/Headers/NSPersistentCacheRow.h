/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSPersistentCacheRow : NSObject

{
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st {
        unsigned int _invalidToOnes:1;
        unsigned int _hasTemporaryID:1;
        unsigned int _backgroundDealloc:1;
        unsigned int _reservedFlags:1;
        unsigned int _virtualfk_count:14;
        unsigned int _ordkey_count:14;
    } _externalRefFlags;
    id *_toManyMap;
    double _birth;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (unsigned int)options;
- (unsigned long long)version;
- (double)timestamp;
- (id)objectID;
- (void)setTimestamp:(double)arg1;
- (const id *)knownKeyValuesPointer;
- (void)updateMissingRelationshipCachesFromOriginal:(id)arg1;
- (void)incrementRefCount;
- (int)externalReferenceCount;
- (id)initWithOptions:(unsigned int)arg1 andTimestamp:(double)arg2;
- (void)_initializeRelationshipCaches;
- (unsigned long long)toManyOffsetForProperty:(id)arg1;
- (int)decrementRefCount;
- (void)incrementExternalReferenceCount:(int)arg1;
- (void)copyRelationshipCachesFrom:(id)arg1;
- (void)releaseRelationshipCaches;
- (id)relatedObjectIDsForProperty:(id)arg1;
- (double)timestampForProperty:(id)arg1;
- (void)setRelatedObjectIDs:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (id)ancillaryOrderKeysForProperty:(id)arg1;
- (void)setAncillaryOrderKeys:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;

@end
