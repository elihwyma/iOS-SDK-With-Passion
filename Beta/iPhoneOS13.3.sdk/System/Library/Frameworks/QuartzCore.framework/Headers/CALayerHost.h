/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property unsigned int contextId;
@property _Bool inheritsSecurity;
@property _Bool rendersAsynchronously;
@property _Bool preservesFlip;

+ (_Bool)_hasRenderLayerSubclass;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)didChangeValueForKey:(id)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(_Bool)arg1;

@end
