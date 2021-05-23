/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/NetTopoObjectLayer.h>

@class CAShapeLayer, NSString;

@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer

{
    CAShapeLayer *_connectionLineLayer;
    struct CGPath *_hitTestPath;
    struct CGColor *_lineColorActive;
    struct CGColor *_lineColorInactive;
    struct CGColor *_lineColorEthernet;
    struct CGColor *_lineColorWiFi;
    struct CGColor *_selectedLineColor;
    struct CGColor *_clearColor;
    struct CGColor *_whiteColor;
    unsigned long long _upstreamDeviceSpatialRelationship;
    unsigned long long _connectionStyle;
    struct CGPoint _upstreamConnectionPoint;
    struct CGPoint _downstreamConnectionPoint;
    unsigned long long _upstreamConnectionSide;
    struct CGPoint _siblingMergePoint;
    unsigned long long _connectionMediumFallback;
    struct CGPath *_arrowhead;
}

@property (nonatomic) unsigned long long upstreamDeviceSpatialRelationship;
@property (nonatomic) unsigned long long connectionStyle;
@property (nonatomic, readonly) unsigned long long connectionMedium;
@property (nonatomic) unsigned long long connectionMediumFallback;
@property (nonatomic) struct CGPoint upstreamConnectionPoint;
@property (nonatomic) struct CGPoint downstreamConnectionPoint;
@property (nonatomic) unsigned long long upstreamConnectionSide;
@property (nonatomic) struct CGPoint siblingMergePoint;
@property (nonatomic, readonly) struct CGPath *hitTestPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplay;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSublayers;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned long long)arg3;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (struct CGRect)getUserInteractionBounds;
- (void)initNetTopoDeviceConnectionLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;
- (void)addBottomWindingConnectionToPath:(struct CGPath *)arg1 withOffset:(double)arg2;
- (void)addSideWindingConnectionToPath:(struct CGPath *)arg1 withOffset:(double)arg2;
- (void)addCurvedArrowConnectionToPath:(struct CGPath *)arg1 withOffset:(double)arg2;
- (struct CGPath *)newConnectionPathWithOffset:(double)arg1;

@end
