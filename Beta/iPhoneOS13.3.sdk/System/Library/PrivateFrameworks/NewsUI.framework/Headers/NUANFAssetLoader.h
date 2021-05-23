/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCAsyncOnceOperation, FCFlintResourceManager, NSArray, NSMutableDictionary, SXContext;

@interface NUANFAssetLoader : NSObject

{
    long long _relativePriority;
    SXContext *_context;
    FCFlintResourceManager *_flintResourceManager;
    NSArray *_resourceIDs;
    NSMutableDictionary *_fetchedResourceIDs;
    FCAsyncOnceOperation *_assetURLsOperation;
    FCAsyncOnceOperation *_assetsOperation;
}

@property (retain, nonatomic) SXContext *context;
@property (retain, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (retain, nonatomic) NSArray *resourceIDs;
@property (retain, nonatomic) NSMutableDictionary *fetchedResourceIDs;
@property (retain, nonatomic) FCAsyncOnceOperation *assetURLsOperation;
@property (nonatomic, readonly) FCAsyncOnceOperation *assetsOperation;
@property (nonatomic) long long relativePriority;

- (id)loadAssetWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadAssetURLsWithCompletion:(CDUnknownBlockType)arg1;
- (id)resourceIDForResourceURL:(id)arg1;
- (id)resourceForID:(id)arg1;
- (id)initWithContext:(id)arg1 flintResourceManager:(id)arg2;
- (id)loadAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)asyncLoadAssetURLsOnceWithCompletion:(CDUnknownBlockType)arg1;
- (id)asyncLoadAssetsOnceWithCompletion:(CDUnknownBlockType)arg1;
- (id)assetDownloadOperationForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
