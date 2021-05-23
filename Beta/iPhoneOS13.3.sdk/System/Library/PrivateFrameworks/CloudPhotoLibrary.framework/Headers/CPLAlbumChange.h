/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLContainerChange.h>

@class NSString;

@interface CPLAlbumChange : CPLContainerChange

{
    NSString *_keyAssetIdentifier;
    _Bool _albumSortAscending;
    unsigned long long _albumType;
    NSString *_name;
    long long _position;
    NSString *_parentIdentifier;
    unsigned long long _albumSortType;
}

@property (nonatomic) unsigned long long albumType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *parentIdentifier;
@property (nonatomic) unsigned long long albumSortType;
@property (nonatomic) _Bool albumSortAscending;

- (id)propertiesDescription;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (_Bool)validateRecordForTracker:(id)arg1;
- (id)parentScopedIdentifier;
- (void)setParentScopedIdentifier:(id)arg1;

@end
