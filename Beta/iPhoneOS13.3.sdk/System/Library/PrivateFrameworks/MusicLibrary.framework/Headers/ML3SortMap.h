/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3DatabaseConnection, ML3MusicLibrary, NSData, NSMutableArray, NSMutableDictionary;

@interface ML3SortMap : NSObject

{
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
    NSMutableDictionary *_nameOrders;
    NSMutableArray *_entries;
    NSData *_minSortKey;
    NSData *_maxSortKey;
    long long _smallestNameDelta;
    _Bool _preloadNames;
}

- (id)initWithConnection:(id)arg1 library:(id)arg2 preloadNames:(_Bool)arg3;
- (_Bool)insertStringsIntoSortMap:(id)arg1 didReSortMap:(_Bool *)arg2;
- (_Bool)commitUpdates;
- (id)nameOrders;
- (id)_sortedNameEntriesToInsertForNames:(id)arg1;
- (_Bool)_insertSortedNameEntriesIntoSortMap:(id)arg1;
- (_Bool)loadExistingSortedEntries;
- (long long)_minNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg2;
- (long long)_maxNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg2;
- (id)_minSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg2;
- (id)_maxSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg2;
- (long long)_sortKeyDistance:(id)arg1 sortKey2:(id)arg2 offset:(unsigned long long)arg3;
- (_Bool)attemptInsertStringsIntoSortMap:(id)arg1;
- (_Bool)commitFailedInsertedStrings:(id)arg1;
- (id)_sortKeyString:(id)arg1;

@end
