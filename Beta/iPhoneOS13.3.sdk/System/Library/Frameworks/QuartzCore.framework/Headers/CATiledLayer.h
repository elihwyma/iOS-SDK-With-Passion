/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@protocol CATiledLayerDelegate><CALayerDelegate;

@interface CATiledLayer : CALayer

@property struct CGColor *fillColor;
@property double maximumTileScale;
@property (getter=isDrawingEnabled) _Bool drawingEnabled;
@property (weak) id <CATiledLayerDelegate><CALayerDelegate> delegate;
@property unsigned long long levelsOfDetail;
@property unsigned long long levelsOfDetailBias;
@property struct CGSize tileSize;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (double)fadeDuration;
+ (unsigned int)prefetchedTiles;
+ (_Bool)shouldDrawOnMainThread;

- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setContents:(id)arg1;
- (void)_display;
- (void)invalidateContents;
- (void)_colorSpaceDidChange;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
- (void)_dealloc;
- (_Bool)_canDisplayConcurrently;
- (_Bool)canDrawRect:(struct CGRect)arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2;
- (void)displayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3;

@end
