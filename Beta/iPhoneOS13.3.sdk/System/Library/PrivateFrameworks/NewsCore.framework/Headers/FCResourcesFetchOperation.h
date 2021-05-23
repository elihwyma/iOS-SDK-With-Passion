/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCMultiStepFetchOperation.h>

@class NSArray;

@protocol FCContentContext;

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation

{
    _Bool _downloadAssets;
    long long _cacheLifetimeHint;
    CDUnknownBlockType _progressHandler;
    id <FCContentContext> _context;
    NSArray *_resourceIDs;
    NSArray *_resources;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (nonatomic, readonly) NSArray *resourceIDs;
@property (nonatomic, readonly) _Bool downloadAssets;
@property (retain, nonatomic) NSArray *resources;
@property (nonatomic) long long cacheLifetimeHint;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)init;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 resourceIDs:(id)arg2 downloadAssets:(_Bool)arg3;
- (id)completeFetchOperation;
- (id)fetchResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (id)downloadAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shoudUsePermanentURLForResourceID:(id)arg1;

@end
