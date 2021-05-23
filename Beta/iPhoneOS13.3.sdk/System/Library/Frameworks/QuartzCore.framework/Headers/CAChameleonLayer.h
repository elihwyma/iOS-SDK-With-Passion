/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@interface CAChameleonLayer : CALayer

+ (_Bool)_hasRenderLayerSubclass;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;

@end
