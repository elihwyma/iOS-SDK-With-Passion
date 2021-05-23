/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class CPLMemoryAssetList, NSData, NSDate, NSString;

@interface CPLMemoryChange : CPLRecordChange

{
    _Bool _favorite;
    _Bool _rejected;
    _Bool _userCreated;
    NSString *_title;
    NSString *_subtitle;
    long long _category;
    long long _subcategory;
    CPLMemoryAssetList *_assetList;
    NSData *_assetListPredicate;
    NSDate *_creationDate;
    NSData *_graphData;
    long long _graphVersion;
    NSData *_movieData;
    double _score;
    long long _notificationState;
    NSData *_blacklistedFeature;
    long long _playCount;
    long long _shareCount;
    long long _viewCount;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) long long category;
@property (nonatomic) long long subcategory;
@property (copy, nonatomic) CPLMemoryAssetList *assetList;
@property (copy, nonatomic) NSData *assetListPredicate;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSData *graphData;
@property (nonatomic) long long graphVersion;
@property (nonatomic, getter=isFavorite) _Bool favorite;
@property (nonatomic, getter=isRejected) _Bool rejected;
@property (nonatomic, getter=isUserCreated) _Bool userCreated;
@property (copy, nonatomic) NSData *movieData;
@property (nonatomic) double score;
@property (nonatomic) long long notificationState;
@property (copy, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;

+ (id)_createTestMemoryWithAssets:(id)arg1;

- (_Bool)supportsDeletion;
- (id)propertiesDescription;
- (_Bool)supportsDirectDeletion;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;

@end
