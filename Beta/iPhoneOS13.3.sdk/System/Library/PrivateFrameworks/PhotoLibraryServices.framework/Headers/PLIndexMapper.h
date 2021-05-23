/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol PLIndexMapperDataSource;

@interface PLIndexMapper : NSObject

{
    id <PLIndexMapperDataSource> _dataSource;
}

- (id)initWithDataSource:(id)arg1;
- (id)indexesForBackingIndexes:(id)arg1;
- (unsigned long long)indexForBackingIndex:(unsigned long long)arg1;
- (id)backingIndexesForIndexes:(id)arg1;
- (unsigned long long)backingIndexForIndex:(unsigned long long)arg1;
- (_Bool)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3;

@end
