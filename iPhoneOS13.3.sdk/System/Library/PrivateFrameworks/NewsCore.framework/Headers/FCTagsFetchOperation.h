//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCAssetManager, FCHeldRecords, FCTagRecordSource, NSArray;
@protocol FCTagsFetchOperationDelegate;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation
{
    BOOL _includeChildren;
    BOOL _includeParents;
    BOOL _overrideTargetsCachePolicy;
    BOOL _overrideChildrenCachePolicy;
    NSUInteger _targetsCachePolicy;
    double _targetsMaximumCachedAge;
    NSUInteger _childrenCachePolicy;
    double _childrenMaximumCachedAge;
    NSArray *_tagIDs;
    FCHeldRecords *_heldTagRecords;
    FCHeldRecords *_heldParentTagRecords;
    FCHeldRecords *_heldChildTagRecords;
    FCTagRecordSource *_tagRecordSource;
    FCAssetManager *_assetManager;
    id <FCTagsFetchOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <FCTagsFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) FCTagRecordSource *tagRecordSource; // @synthesize tagRecordSource=_tagRecordSource;
@property(retain, nonatomic) FCHeldRecords *heldChildTagRecords; // @synthesize heldChildTagRecords=_heldChildTagRecords;
@property(retain, nonatomic) FCHeldRecords *heldParentTagRecords; // @synthesize heldParentTagRecords=_heldParentTagRecords;
@property(retain, nonatomic) FCHeldRecords *heldTagRecords; // @synthesize heldTagRecords=_heldTagRecords;
@property(copy, nonatomic) NSArray *tagIDs; // @synthesize tagIDs=_tagIDs;
@property double childrenMaximumCachedAge; // @synthesize childrenMaximumCachedAge=_childrenMaximumCachedAge;
@property NSUInteger childrenCachePolicy; // @synthesize childrenCachePolicy=_childrenCachePolicy;
@property BOOL overrideChildrenCachePolicy; // @synthesize overrideChildrenCachePolicy=_overrideChildrenCachePolicy;
@property double targetsMaximumCachedAge; // @synthesize targetsMaximumCachedAge=_targetsMaximumCachedAge;
@property NSUInteger targetsCachePolicy; // @synthesize targetsCachePolicy=_targetsCachePolicy;
@property BOOL overrideTargetsCachePolicy; // @synthesize overrideTargetsCachePolicy=_overrideTargetsCachePolicy;
@property(nonatomic) BOOL includeParents; // @synthesize includeParents=_includeParents;
@property(nonatomic) BOOL includeChildren; // @synthesize includeChildren=_includeChildren;
// - (void).cxx_destruct;
- (id)completeFetchOperation;
- (id)fetchChildTagRecordsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)fetchParentTagRecordsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)fetchTagRecordsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)initWithTagIDs:(id)arg1 tagRecordSource:(id)arg2 assetManager:(id)arg3 delegate:(id)arg4;

@end

