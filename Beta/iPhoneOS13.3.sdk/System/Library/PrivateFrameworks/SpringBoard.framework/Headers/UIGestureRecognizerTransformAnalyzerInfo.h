/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject

{
    double _translationMagnitude;
    double _scale;
    double _rotation;
    struct CGPoint _translation;
    struct CGPoint _absoluteTranslation;
}

@property (nonatomic, setter=_setTranslation:) struct CGPoint translation;
@property (nonatomic, setter=_setTranslationMagnitude:) double translationMagnitude;
@property (nonatomic, setter=_setAbsoluteTranslation:) struct CGPoint absoluteTranslation;
@property (nonatomic, setter=_setScale:) double scale;
@property (nonatomic, setter=_setRotation:) double rotation;

- (id)description;
- (void)_reset;

@end
