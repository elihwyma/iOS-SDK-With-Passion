/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CALayer.h>

@interface CALayer (WebCoreCALayerExtras)

+ (id)_web_renderLayerWithContextID:(unsigned int)arg1;

- (void)web_disableAllActions;
- (void)_web_setLayerTopLeftPosition:(struct CGPoint)arg1;
- (void)_web_setLayerBoundsOrigin:(struct CGPoint)arg1;

@end
