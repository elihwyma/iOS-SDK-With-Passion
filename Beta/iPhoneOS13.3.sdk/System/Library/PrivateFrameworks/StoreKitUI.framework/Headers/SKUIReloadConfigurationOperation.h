/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSObject, SSURLBag;

@protocol OS_dispatch_queue;

@interface SKUIReloadConfigurationOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _outputBlock;
    SSURLBag *_urlBag;
}

@property (retain) SSURLBag *URLBag;
@property (copy) CDUnknownBlockType outputBlock;

+ (id)cachePath;

- (id)init;
- (void)main;

@end
