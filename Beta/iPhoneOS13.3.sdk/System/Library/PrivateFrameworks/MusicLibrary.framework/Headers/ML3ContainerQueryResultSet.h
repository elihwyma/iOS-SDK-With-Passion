/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3QueryResultSet.h>

@class ML3QueryResultSet_BackingStore;

__attribute__((visibility("hidden")))
@interface ML3ContainerQueryResultSet : ML3QueryResultSet

{
    _Bool _needsSorting;
    _Bool _needsReversing;
    ML3QueryResultSet_BackingStore *_sortedBackingStore;
    long long _containerPID;
    unsigned long long _entityLimit;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQuery:(id)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)entityLimit;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
- (_Bool)_updateToLibraryCurrentRevision;
- (void)_loadCurrentFullResults;
- (id)sortedBackingStoreForDisplayOrdering;

@end
