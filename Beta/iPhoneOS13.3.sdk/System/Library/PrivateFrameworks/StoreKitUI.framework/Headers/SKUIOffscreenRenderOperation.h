/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSObject, UIImage;

@protocol OS_dispatch_queue;

@interface SKUIOffscreenRenderOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    CDUnknownBlockType _createLayerBlock;
    UIImage *_outputImage;
}

@property (copy, nonatomic) CDUnknownBlockType createLayerBlock;
@property (nonatomic, readonly) UIImage *outputImage;

+ (void)preheatOffscreenRenderOperations;

- (id)init;
- (void)main;

@end
