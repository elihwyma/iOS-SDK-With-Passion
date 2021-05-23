/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKArrowAnnotation.h>

@class NSString, UIColor;

@interface AKArrowShapeAnnotation : AKArrowAnnotation

{
    double _arrowLineWidth;
    double _arrowHeadWidth;
    double _arrowHeadLength;
}

@property double arrowLineWidth;
@property double arrowHeadWidth;
@property double arrowHeadLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) UIColor *fillColor;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;

@end
