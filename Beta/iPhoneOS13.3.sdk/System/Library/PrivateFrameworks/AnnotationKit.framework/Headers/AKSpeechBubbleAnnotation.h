/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKThoughtBubbleAnnotation.h>

@interface AKSpeechBubbleAnnotation : AKThoughtBubbleAnnotation

{
    double _pointyBitBaseWidthAngle;
}

@property double pointyBitBaseWidthAngle;

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForAdornments;

@end
