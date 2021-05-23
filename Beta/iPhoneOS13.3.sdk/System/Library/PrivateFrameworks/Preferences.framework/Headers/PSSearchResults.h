/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PSSearchResults : NSObject

{
    NSMutableArray *_sectionEntries;
    NSMutableSet *_explicitlyAddedSectionEntries;
    NSMutableDictionary *_entriesBySection;
    _Bool _needsSorting;
    _Bool _treatSectionEntriesAsRegularEntries;
    CDUnknownBlockType _sectionComparator;
    CDUnknownBlockType _entryComparator;
}

@property (copy, nonatomic) CDUnknownBlockType sectionComparator;
@property (copy, nonatomic) CDUnknownBlockType entryComparator;
@property (nonatomic) _Bool treatSectionEntriesAsRegularEntries;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addEntry:(id)arg1;
- (void)addEntries:(id)arg1;
- (unsigned long long)removeEntries:(id)arg1;
- (void)sortResults;
- (id)resultsByMergingWithResults:(id)arg1;
- (void)mergeWithResults:(id)arg1;
- (_Bool)removeEntry:(id)arg1;
- (id)_initForCopyWithSectionEntries:(id)arg1 entriesBySection:(id)arg2 explicitlyAddedSectionEntries:(id)arg3;
- (id)entriesInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSectionEntries;
- (unsigned long long)numberOfEntriesInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)totalNumberOfEntries;
- (id)sectionEntryAtIndex:(unsigned long long)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (id)allSectionEntries;

@end
