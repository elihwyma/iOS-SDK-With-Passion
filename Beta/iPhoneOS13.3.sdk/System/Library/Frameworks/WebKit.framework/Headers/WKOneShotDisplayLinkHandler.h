/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WKOneShotDisplayLinkHandler : NSObject

{
    struct RemoteLayerTreeDrawingAreaProxy *_drawingAreaProxy;
    CADisplayLink *_displayLink;
}

- (void)dealloc;
- (void)invalidate;
- (void)pause;
- (void)schedule;
- (void)displayLinkFired:(id)arg1;
- (id)initWithDrawingAreaProxy:(struct RemoteLayerTreeDrawingAreaProxy *)arg1;

@end
