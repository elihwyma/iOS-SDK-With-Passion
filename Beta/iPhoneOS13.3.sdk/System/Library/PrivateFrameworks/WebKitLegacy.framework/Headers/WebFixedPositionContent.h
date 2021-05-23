/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@interface WebFixedPositionContent : NSObject

{
    struct WebFixedPositionContentData *_private;
}

- (void)dealloc;
- (_Bool)hasFixedOrStickyPositionLayers;
- (void)overflowScrollPositionForLayer:(id)arg1 changedTo:(struct CGPoint)arg2;
- (void)scrollOrZoomChanged:(struct CGRect)arg1;
- (void)didFinishScrollingOrZooming;
- (id)initWithWebView:(id)arg1;
- (void)setViewportConstrainedLayers:(HashMap_8e3a669a *)arg1 stickyContainerMap:(const HashMap_9d18c561 *)arg2;

@end
