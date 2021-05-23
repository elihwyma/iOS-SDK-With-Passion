/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO

{
    CDUnknownBlockType _emissionHandler;
    double _scale;
    NSMutableArray *_prevPoints;
    CDStruct_23d8ee2f _lastPoint;
}

@property (nonatomic) double scale;
@property (retain, nonatomic) NSMutableArray *prevPoints;
@property (nonatomic) CDStruct_19cde01f lastPoint;
@property (copy) CDUnknownBlockType emissionHandler;

- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (id)initWithFIFO:(id)arg1 scale:(double)arg2;

@end
