/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, CAShapeLayer, NSMapTable, NSMutableSet, NSSet, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface CKForceLayoutAnimator : NSObject

{
    CADisplayLink *_displayLink;
    NSMutableSet *_nodes;
    NSMutableSet *_links;
    NSMapTable *_weights;
    NSMapTable *_previousCenters;
    NSMapTable *_fixedNodes;
    CAShapeLayer *_linesLayer;
    UIView *_referenceView;
    double _linkDistance;
    double _linkStrength;
    double _friction;
    double _charge;
    double _chargeDistance;
    double _theta;
    double _gravity;
    double _alpha;
}

@property (nonatomic, readonly) UIView *referenceView;
@property (nonatomic, readonly) NSSet *nodes;
@property (nonatomic, readonly) NSSet *links;
@property (nonatomic) double linkDistance;
@property (nonatomic) double linkStrength;
@property (nonatomic) double friction;
@property (nonatomic) double charge;
@property (nonatomic) double chargeDistance;
@property (nonatomic) double theta;
@property (nonatomic) double gravity;
@property (nonatomic) double alpha;
@property (copy, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineWidth;

- (id)init;
- (void)stop;
- (void)start;
- (void)addNode:(id)arg1;
- (id)initWithReferenceView:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)removeAllNodes;
- (void)tick;
- (void)linkNode:(id)arg1 toNode:(id)arg2;
- (void)unlinkNode:(id)arg1 fromNode:(id)arg2;
- (void)fixNode:(id)arg1 atPosition:(struct CGPoint)arg2;
- (void)releaseNode:(id)arg1;

@end
