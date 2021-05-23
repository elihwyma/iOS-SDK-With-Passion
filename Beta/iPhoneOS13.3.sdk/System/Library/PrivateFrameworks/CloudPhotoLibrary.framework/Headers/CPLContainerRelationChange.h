/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class CPLContainerRelation, NSString;

@interface CPLContainerRelationChange : CPLRecordChange

{
    NSString *_itemIdentifier;
    CPLContainerRelation *_relation;
}

@property (copy, nonatomic) NSString *itemIdentifier;
@property (retain, nonatomic) CPLContainerRelation *relation;

+ (id)relationToContainerWithIdentifier:(id)arg1;
+ (id)relationWithItemScopedIdentifier:(id)arg1 containerIdentifier:(id)arg2;
+ (id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2;

- (id)description;
- (id)itemScopedIdentifier;
- (_Bool)supportsDeletion;
- (id)secondaryIdentifier;
- (void)setSecondaryIdentifier:(id)arg1;
- (_Bool)supportsDirectDeletion;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (void)setItemScopedIdentifier:(id)arg1;
- (id)containerScopedIdentifier;
- (void)setContainerScopedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (id)scopedIdentifierForQuarantine;
- (_Bool)validateFullRecord;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;

@end
