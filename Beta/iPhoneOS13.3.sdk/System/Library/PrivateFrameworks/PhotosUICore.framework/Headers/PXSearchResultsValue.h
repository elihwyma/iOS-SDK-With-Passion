/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSMutableDictionary, NSString, PHPerson, PLSearchResult, PSIDate;

@protocol OS_dispatch_queue, PXSearchResultsValueDelegate;

@interface PXSearchResultsValue : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    double _score;
    unsigned long long _searchCategories;
    NSAttributedString *_attributedDisplayTitle;
    NSString *_displaySubtitle;
    PSIDate *_startDate;
    PSIDate *_endDate;
    NSString *_collectionSubtitle;
    NSString *_transientToken;
    NSArray *_assetUUIDs;
    unsigned long long _collectionType;
    NSString *_collectionUUID;
    NSString *_collectionTitle;
    unsigned long long _approximateCount;
    PHPerson *_person;
    NSString *_selectedDisplayTitle;
    NSMutableDictionary *_uuidToAssetMap;
    id <PXSearchResultsValueDelegate> _delegate;
    PLSearchResult *_searchResult;
    NSDate *_date;
    NSString *_dateFilterString;
}

@property (retain, setter=_setSelectedDisplayTitle:) NSString *selectedDisplayTitle;
@property (readonly) NSMutableDictionary *uuidToAssetMap;
@property (weak, nonatomic) id <PXSearchResultsValueDelegate> delegate;
@property (retain, setter=_setSearchResult:) PLSearchResult *searchResult;
@property (setter=_setApproximateCount:) unsigned long long approximateCount;
@property (retain, setter=_setAssetUUIDs:) NSArray *assetUUIDs;
@property (retain, nonatomic, setter=_setDate:) NSDate *date;
@property (retain, nonatomic, setter=_setPerson:) PHPerson *person;
@property (retain, setter=_setDateFilterString:) NSString *dateFilterString;
@property (copy, readonly) NSString *searchString;
@property (nonatomic, readonly) NSArray *searchTokens;
@property (copy, nonatomic) NSString *transientToken;
@property (copy, readonly) NSString *displayTitle;
@property (copy, readonly) NSString *displaySubtitle;
@property (readonly) unsigned long long collectionType;
@property (readonly) NSString *collectionUUID;
@property (readonly) NSString *collectionTitle;
@property (readonly) NSString *collectionSubtitle;
@property (copy, readonly) NSArray *assets;
@property (readonly) unsigned long long searchCategories;
@property (readonly) double score;
@property (readonly) NSDictionary *debugDictionary;
@property (nonatomic, readonly) _Bool isSingletonPersonResult;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long itemType;

- (id)init;
- (long long)compare:(id)arg1;
- (_Bool)isFinished;
- (unsigned long long)categoryAtIndex:(unsigned long long)arg1;
- (id)groupsMatchRanges;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
- (void)_setCollectionType:(unsigned long long)arg1 uuid:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
- (id)displayTitleWithDefaultAttributes:(id)arg1 dimmedAttributes:(id)arg2 selectedDisplayTitle:(id *)arg3;
- (_Bool)isAssetResult;
- (void)fetchRemainingUUIDs:(CDUnknownBlockType)arg1;
- (void)fetchAllUUIDs:(CDUnknownBlockType)arg1;
- (void)_computeScoreWithMaxGroupedResultsCount:(unsigned long long)arg1;
- (id)_startDateForAssetCollection:(id)arg1;
- (id)assetLocalIdentifiersForPreview;
- (void)_setAsset:(id)arg1 forUUID:(id)arg2;
- (void)enumerateSearchIndexCategoriesUsingBlock:(CDUnknownBlockType)arg1;

@end
