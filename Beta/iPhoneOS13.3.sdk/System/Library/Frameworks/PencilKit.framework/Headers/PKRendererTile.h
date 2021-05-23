/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <QuartzCore/CALayer.h>

@class NSArray, NSUUID, PKRendererTileProperties;

@interface PKRendererTile : CALayer

{
    _Atomic double _cachedContentsScale;
    _Atomic long long _renderCount;
    _Atomic double _lastUsedTimestamp;
    _Bool _outOfDate;
    NSUUID *_identifier;
    long long _level;
    NSArray *_renderedStrokes;
    long long _currentlyRenderingCount;
    struct CGPoint _offset;
    struct CGRect _drawingFrame;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) struct CGPoint offset;
@property (nonatomic, readonly) PKRendererTileProperties *properties;
@property (nonatomic, readonly) double drawingContentsScale;
@property (nonatomic, readonly) double lastUsedTimestamp;
@property (nonatomic, readonly) struct CGRect drawingFrame;
@property (copy, nonatomic) NSArray *renderedStrokes;
@property _Bool outOfDate;
@property (readonly) long long renderCount;
@property (nonatomic) long long currentlyRenderingCount;

+ (double)tileSizeForLevel:(long long)arg1;
+ (struct CGRect)layerFrameForLevel:(long long)arg1 offset:(struct CGPoint)arg2;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentsScale:(double)arg1;
- (void)updateDisableTransactionActions:(_Bool)arg1;
- (id)initWithLevel:(long long)arg1 offset:(struct CGPoint)arg2 drawingScale:(double)arg3 contentsScale:(double)arg4;
- (void)updateLastUsedTimestamp;
- (void)updateFrameForScale:(double)arg1;
- (void)showDebugLayer;

@end
