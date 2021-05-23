/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, SKUIClientContext, SKUILayoutCache, SKUIResourceLoader, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarContext : NSObject

{
    SKUIClientContext *_clientContext;
    double _maximumNavigationBarWidth;
    NSOperationQueue *_operationQueue;
    UIViewController *_parentViewController;
    SKUIResourceLoader *_resourceLoader;
    SKUILayoutCache *_textLayoutCache;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) double maximumNavigationBarWidth;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache;

@end
