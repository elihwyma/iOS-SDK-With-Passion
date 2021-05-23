/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@interface CAPortalLayer : CALayer

@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property unsigned int sourceContextId;
@property _Bool hidesSourceLayer;
@property _Bool matchesOpacity;
@property _Bool matchesPosition;
@property _Bool matchesTransform;
@property _Bool allowsBackdropGroups;

+ (_Bool)_hasRenderLayerSubclass;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)didChangeValueForKey:(id)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(_Bool)arg1;

@end
