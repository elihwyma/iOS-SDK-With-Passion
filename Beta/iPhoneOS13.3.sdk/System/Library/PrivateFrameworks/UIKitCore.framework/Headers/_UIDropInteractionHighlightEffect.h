/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CAShapeLayer, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIDropInteractionHighlightEffect : NSObject

{
    long long _visualState;
    double _highlightWidth;
    double _cornerRadius;
    double _highlightInset;
    UIColor *_highlightColor;
    CAShapeLayer *_shapeLayer;
}

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) double highlightWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double highlightInset;
@property (copy, nonatomic) UIColor *highlightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (struct CGRect)highlightRectInView:(id)arg1 forDragInteraction:(id)arg2 withContext:(id)arg3;
- (struct CGRect)clippingRectInView:(id)arg1 forView:(id)arg2;
- (id)updateShapeLayerForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)removeShapeLayer;

@end
