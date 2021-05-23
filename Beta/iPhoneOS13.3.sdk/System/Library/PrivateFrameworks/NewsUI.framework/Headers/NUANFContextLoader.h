/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCAsyncOnceOperation, FCFlintManifest, FCFlintResourceManager, NSOperationQueue, NSString, NUANFAssetLoader, SXContext;

@protocol FCHeadlineProviding, NUArticleResourceURLTranslator, SXHost;

@interface NUANFContextLoader : NSObject

{
    SXContext *_context;
    NUANFAssetLoader *_assetLoader;
    FCFlintManifest *_flintManifest;
    FCFlintResourceManager *_flintResourceManager;
    id <SXHost> _host;
    id <NUArticleResourceURLTranslator> _resourceURLTranslator;
    FCAsyncOnceOperation *_asyncOnceOperation;
    NSOperationQueue *_imageDecodingQueue;
    id <FCHeadlineProviding> _headline;
}

@property (nonatomic, readonly) FCFlintManifest *flintManifest;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (nonatomic, readonly) id <SXHost> host;
@property (nonatomic, readonly) id <NUArticleResourceURLTranslator> resourceURLTranslator;
@property (retain, nonatomic) SXContext *context;
@property (retain, nonatomic) NUANFAssetLoader *assetLoader;
@property (retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation;
@property (nonatomic, readonly) NSOperationQueue *imageDecodingQueue;
@property (nonatomic, readonly) id <FCHeadlineProviding> headline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)asyncLoadContextOnceWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)loadImagesForImageRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fileURLForURL:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)translateURL:(id)arg1;
- (id)initWithFlintManifest:(id)arg1 flintResourceManager:(id)arg2 host:(id)arg3 resourceURLTranslator:(id)arg4 headline:(id)arg5;
- (id)loadContextWithCompletion:(CDUnknownBlockType)arg1;

@end
