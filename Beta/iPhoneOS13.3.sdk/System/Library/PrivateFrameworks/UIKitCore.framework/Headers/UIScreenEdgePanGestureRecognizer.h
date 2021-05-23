/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPanGestureRecognizer.h>

@class NSString, _UISEGestureFeatureSettings, _UISEMuxGestureFeature;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer

{
    _UISEGestureFeatureSettings *_settings;
    CDUnknownBlockType _createFeatureBlock;
    _UISEMuxGestureFeature *_rootFeature;
    unsigned long long _touchedEdges;
    unsigned long long _edges;
}

@property (nonatomic) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_shouldDefaultToTouches;
+ (_Bool)_shouldSupportStylusTouches;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setMinimumNumberOfTouches:(unsigned long long)arg1;
- (unsigned long long)touchedEdges;
- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (void)_setHysteresis:(double)arg1;
- (double)_bottomEdgeAngleWindow;
- (double)_bottomEdgeRegionSize;
- (double)_edgeRegionSize;
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;
- (long long)_touchInterfaceOrientation;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (void)_setBottomEdgeAngleWindow:(double)arg1;
- (void)_setBottomEdgeRegionSize:(double)arg1;
- (void)_setEdgeRegionSize:(double)arg1;

@end
