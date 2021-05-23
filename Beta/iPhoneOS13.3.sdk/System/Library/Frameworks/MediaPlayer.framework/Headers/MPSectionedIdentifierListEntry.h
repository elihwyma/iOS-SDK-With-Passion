/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPSectionedIdentifierListEntryPositionKey, NSArray, NSMutableArray, NSString;

@interface MPSectionedIdentifierListEntry : NSObject <Swift>

{
    NSMutableArray *_nextEntries;
    _Bool _dataSourceRemoved;
    MPSectionedIdentifierListEntryPositionKey *_positionKey;
    NSString *_sectionIdentifier;
    NSString *_hostedSectionIdentifier;
    MPSectionedIdentifierListEntry *_previousEntry;
    long long _branchDepth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MPSectionedIdentifierListEntryPositionKey *positionKey;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *hostedSectionIdentifier;
@property (nonatomic, readonly) NSArray *nextEntries;
@property (weak, nonatomic) MPSectionedIdentifierListEntry *previousEntry;
@property (nonatomic) long long branchDepth;
@property (nonatomic, readonly, getter=isDataSourceRemoved) _Bool dataSourceRemoved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long entryType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemResult;
- (id)trackingEntryResult;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;
- (void)addBranch:(id)arg1 forceBranchDepthIncrease:(_Bool)arg2;
- (void)addNextEntry:(id)arg1;
- (void)prepareForDealloc;
- (void)setDataSourceRemoved;
- (id)encodableNextEntriesWithExclusiveAccessToken:(id)arg1;

@end
