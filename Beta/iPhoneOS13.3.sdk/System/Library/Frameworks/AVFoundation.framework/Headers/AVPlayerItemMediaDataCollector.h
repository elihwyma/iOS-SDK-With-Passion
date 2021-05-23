/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject

{
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (id)init;
- (void)dealloc;
- (id)_weakReference;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (void)_detatchFromPlayerItem;

@end
