/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>

@class MPSectionedIdentifierListHeadEntry, NSString;

@interface MPSectionedIdentifierListTailEntry : MPSectionedIdentifierListEntry

{
    MPSectionedIdentifierListHeadEntry *_sectionHeadEntry;
}

@property (weak, nonatomic) MPSectionedIdentifierListHeadEntry *sectionHeadEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long branchDepth;
@property (nonatomic, readonly) long long entryType;
@property (nonatomic, readonly) NSString *sectionIdentifier;

+ (id)tailEntryWithSectionHeadEntry:(id)arg1;

- (id)previousEntry;

@end
