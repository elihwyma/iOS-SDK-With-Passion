/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>

@class MPSectionedIdentifierListItemEntry, MPSectionedIdentifierListTailEntry, NSMutableDictionary, NSString;

@protocol MPSectionedIdentifierListDataSource;

@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry

{
    _Bool _shuffledHead;
    NSMutableDictionary *_identifiersItemEntryMap;
    MPSectionedIdentifierListTailEntry *_tailEntry;
    MPSectionedIdentifierListItemEntry *_lastItemEntry;
    id <MPSectionedIdentifierListDataSource> _dataSource;
}

@property (nonatomic, readonly) NSMutableDictionary *identifiersItemEntryMap;
@property (retain, nonatomic) MPSectionedIdentifierListTailEntry *tailEntry;
@property (retain, nonatomic) MPSectionedIdentifierListItemEntry *lastItemEntry;
@property (retain, nonatomic) id <MPSectionedIdentifierListDataSource> dataSource;
@property (nonatomic, getter=isShuffledHead) _Bool shuffledHead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long branchDepth;
@property (nonatomic, readonly) long long entryType;
@property (nonatomic, readonly) NSString *sectionIdentifier;

+ (id)headEntryWithSectionIdentifier:(id)arg1;

- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;
- (id)nextEntries;
- (void)setBranchDepth:(long long)arg1;

@end
