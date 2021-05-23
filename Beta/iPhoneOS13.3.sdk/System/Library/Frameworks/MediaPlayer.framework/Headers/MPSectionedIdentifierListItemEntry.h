/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>

@class NSMutableArray, NSString;

@interface MPSectionedIdentifierListItemEntry : MPSectionedIdentifierListEntry

{
    _Bool _hasClones;
    _Bool _dataSourceCloned;
    _Bool _dataSourceMoved;
    _Bool _userRemoved;
    _Bool _userMoved;
    _Bool _userCloned;
    NSString *_itemIdentifier;
    MPSectionedIdentifierListItemEntry *_rootEntry;
    NSMutableArray *_clonedEntries;
}

@property (nonatomic, readonly) NSString *itemIdentifier;
@property (weak, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry;
@property (nonatomic, readonly) MPSectionedIdentifierListItemEntry *latestUserClone;
@property (nonatomic, readonly) MPSectionedIdentifierListItemEntry *latestDataSourceClone;
@property (nonatomic, readonly) _Bool hasClones;
@property (retain, nonatomic) NSMutableArray *clonedEntries;
@property (nonatomic, readonly, getter=isRemoved) _Bool removed;
@property (nonatomic, readonly) CDStruct_d4f770cf state;
@property (nonatomic, readonly, getter=isDataSourceCloned) _Bool dataSourceCloned;
@property (nonatomic, readonly, getter=isDataSourceMoved) _Bool dataSourceMoved;
@property (nonatomic, readonly, getter=isUserRemoved) _Bool userRemoved;
@property (nonatomic, readonly, getter=isUserMoved) _Bool userMoved;
@property (nonatomic, readonly, getter=isUserCloned) _Bool userCloned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long branchDepth;
@property (nonatomic, readonly) long long entryType;
@property (nonatomic, readonly) NSString *sectionIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 generationPrefix:(id)arg3;
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForDealloc;
- (void)setDataSourceRemoved;
- (_Bool)isDataSourceRemoved;
- (void)setDataSourceCloned;
- (void)setDataSourceMoved;
- (void)setUserRemoved;
- (void)setUserMoved;
- (void)setUserCloned;
- (id)newClonedEntry;
- (long long)_generationNumber;

@end
