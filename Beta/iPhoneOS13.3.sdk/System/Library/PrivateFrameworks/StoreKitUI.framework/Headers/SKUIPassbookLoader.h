/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, SKUIClientContext;

@protocol SKUIPassbookLoaderDelegate;

@interface SKUIPassbookLoader : NSObject

{
    SKUIClientContext *_clientContext;
    id <SKUIPassbookLoaderDelegate> _delegate;
    long long _loadCount;
    NSOperationQueue *_operationQueue;
}

@property (weak, nonatomic) id <SKUIPassbookLoaderDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addPassesViewControllerDidFinish:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)loadPassWithURL:(id)arg1;
- (void)_loadPassWithURL:(id)arg1;
- (void)_sendDidFinishIfFinished;
- (void)_didLoadWithPass:(id)arg1 error:(id)arg2;

@end
