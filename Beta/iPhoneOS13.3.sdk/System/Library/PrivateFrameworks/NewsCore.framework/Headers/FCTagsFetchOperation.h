/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCAssetManager, FCHeldRecords, FCTagRecordSource, NSArray;

@protocol FCTagsFetchOperationDelegate;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation

{
    _Bool _includeChildren;
    _Bool _includeParents;
    _Bool _overrideTargetsCachePolicy;
    _Bool _overrideChildrenCachePolicy;
    unsigned long long _targetsCachePolicy;
    double _targetsMaximumCachedAge;
    unsigned long long _childrenCachePolicy;
    double _childrenMaximumCachedAge;
    NSArray *_tagIDs;
    FCHeldRecords *_heldTagRecords;
    FCHeldRecords *_heldParentTagRecords;
    FCHeldRecords *_heldChildTagRecords;
    FCTagRecordSource *_tagRecordSource;
    FCAssetManager *_assetManager;
    id <FCTagsFetchOperationDelegate> _delegate;
}

@property (copy, nonatomic) NSArray *tagIDs;
@property (retain, nonatomic) FCHeldRecords *heldTagRecords;
@property (retain, nonatomic) FCHeldRecords *heldParentTagRecords;
@property (retain, nonatomic) FCHeldRecords *heldChildTagRecords;
@property (retain, nonatomic) FCTagRecordSource *tagRecordSource;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (weak, nonatomic) id <FCTagsFetchOperationDelegate> delegate;
@property (nonatomic) _Bool includeChildren;
@property (nonatomic) _Bool includeParents;
@property _Bool overrideTargetsCachePolicy;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;
@property _Bool overrideChildrenCachePolicy;
@property unsigned long long childrenCachePolicy;
@property double childrenMaximumCachedAge;

- (id)initWithTagIDs:(id)arg1 tagRecordSource:(id)arg2 assetManager:(id)arg3 delegate:(id)arg4;
- (id)completeFetchOperation;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)fetchTagRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchParentTagRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchChildTagRecordsWithCompletion:(CDUnknownBlockType)arg1;

@end
