/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUIJSImageColorAnalyzer : IKJSObject

{
    SKUIClientContext *_clientContext;
    NSMutableDictionary *_artworkRequestIDsToManagedCallbacks;
    NSOperationQueue *_operationQueue;
    SKUIResourceLoader *_resourceLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (void)analyzeImageAtUrl:(id)arg1:(id)arg2;

@end
