/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, NSURL, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIStoreAssetResourceLoaderDelegate : NSObject

{
    _Bool _isITunesStream;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    NSOperationQueue *_operationQueue;
    _Bool _shouldUseITunesStoreSecureKeyDelivery;
    SKUIClientContext *_clientContext;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)storeAssetResourceLoaderDelegateForPlayableAsset:(id)arg1 clientContext:(id)arg2;

- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

@end
