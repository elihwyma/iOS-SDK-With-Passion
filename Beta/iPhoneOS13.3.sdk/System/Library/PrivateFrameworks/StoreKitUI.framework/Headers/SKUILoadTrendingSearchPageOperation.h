/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSURL, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUILoadTrendingSearchPageOperation : NSOperation

{
    SKUIClientContext *_clientContext;
    NSURL *_pageURL;
    CDUnknownBlockType _outputBlock;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) NSURL *pageURL;
@property (copy, nonatomic, readonly) CDUnknownBlockType outputBlock;

- (void)main;
- (id)initWithClientContext:(id)arg1 pageURL:(id)arg2 outputBlock:(CDUnknownBlockType)arg3;

@end
