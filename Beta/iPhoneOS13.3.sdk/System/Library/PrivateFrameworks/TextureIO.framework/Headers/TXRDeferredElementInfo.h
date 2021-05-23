/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TXRDeferredElementInfo : NSObject

{
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    NSMutableArray *_faces;
}

@property (nonatomic, readonly) NSMutableArray *faces;

- (id)initAsCubemap:(_Bool)arg1;

@end
