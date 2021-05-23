/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CADistanceFieldLayer : CALayer

@property (copy) NSString *renderMode;
@property _Bool invertsShape;
@property struct CGColor *foregroundColor;
@property double offset;
@property double sharpness;
@property double lineWidth;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)didChangeValueForKey:(id)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)_colorSpaceDidChange;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (unsigned int)_renderImageCopyFlags;

@end
