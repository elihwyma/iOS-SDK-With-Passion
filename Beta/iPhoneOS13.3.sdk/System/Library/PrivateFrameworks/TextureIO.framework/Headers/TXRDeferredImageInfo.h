/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class TXRImageInfo;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TXRDeferredImageInfo : NSObject

{
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    TXRImageInfo *_info;
}

@property (retain, nonatomic) TXRImageInfo *info;

- (id)init;
- (void)signalLoaded;

@end
