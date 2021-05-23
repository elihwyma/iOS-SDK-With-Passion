/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class TSDLayout, TSDWrapPolygon, TSUPointerKeyDictionary, TSWPColumn;

@protocol TSWPLayoutTarget;

@interface SXTextTangierTextWrapContext : NSObject

{
    TSWPColumn *_column;
    TSDLayout<TSWPLayoutTarget> *_target;
    TSDWrapPolygon *_interiorWrapPolygon;
    TSUPointerKeyDictionary *_wrapPathInverseTransformInRootDictionary;
    struct CGAffineTransform _targetInverseTransformInRoot;
}

@property (retain, nonatomic) TSUPointerKeyDictionary *wrapPathInverseTransformInRootDictionary;
@property (nonatomic, readonly) TSWPColumn *column;
@property (weak, nonatomic, readonly) TSDLayout<TSWPLayoutTarget> *target;
@property (nonatomic, readonly) TSDWrapPolygon *interiorWrapPolygon;
@property (nonatomic, readonly) struct CGAffineTransform targetInverseTransformInRoot;

- (void)setTarget:(id)arg1;
- (id)initWithColumn:(id)arg1 targetLayout:(id)arg2;
- (id)transformedWrapPolygonForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform)arg2;

@end
