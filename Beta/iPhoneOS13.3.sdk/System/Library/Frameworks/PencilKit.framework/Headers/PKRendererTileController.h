/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PKRendererTileController : NSObject

{
    NSObject<OS_dispatch_queue> *_tileQueue;
    NSMutableDictionary *_tileFramebuffers;
}

+ (id)sharedController;

- (id)init;
- (id)framebufferForTile:(id)arg1 createIfNeeded:(_Bool)arg2 device:(id)arg3 pixelFormat:(unsigned long long)arg4 clearFramebufferBlock:(CDUnknownBlockType)arg5;
- (void)didTeardownTile:(id)arg1;

@end
