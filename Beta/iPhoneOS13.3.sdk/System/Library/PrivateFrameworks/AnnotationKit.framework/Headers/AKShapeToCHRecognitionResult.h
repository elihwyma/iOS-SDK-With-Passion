/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKAnnotation, CHRecognitionResult, PKDrawing, UIBezierPath;

@interface AKShapeToCHRecognitionResult : NSObject

{
    _Bool _doodlePathIsPrestroked;
    long long _tag;
    CHRecognitionResult *_result;
    UIBezierPath *_doodlePath;
    PKDrawing *_inkDrawing;
    AKAnnotation *_annotation;
    struct CGRect _doodlePathBoundsInInputView;
}

@property long long tag;
@property (retain) CHRecognitionResult *result;
@property (retain) UIBezierPath *doodlePath;
@property (retain) PKDrawing *inkDrawing;
@property (retain) AKAnnotation *annotation;
@property struct CGRect doodlePathBoundsInInputView;
@property _Bool doodlePathIsPrestroked;

- (id)initWith:(long long)arg1 result:(id)arg2;

@end
