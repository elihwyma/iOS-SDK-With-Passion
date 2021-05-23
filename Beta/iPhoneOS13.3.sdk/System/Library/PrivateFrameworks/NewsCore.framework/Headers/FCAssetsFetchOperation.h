/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFetchOperation.h>

@class NSArray;

@interface FCAssetsFetchOperation : FCFetchOperation

{
    CDUnknownBlockType _progressHandler;
    NSArray *_assetHandles;
}

@property (copy, nonatomic) NSArray *assetHandles;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (void)_finish;
- (void)performOperation;
- (id)initWithAssetHandles:(id)arg1;
- (id)initWithAssetHandle:(id)arg1;

@end
