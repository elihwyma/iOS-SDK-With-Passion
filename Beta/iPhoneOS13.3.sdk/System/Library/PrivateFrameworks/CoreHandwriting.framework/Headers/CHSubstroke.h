/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@protocol CHStrokeIdentifier;

@interface CHSubstroke : NSObject

{
    vector_2e7754b6 _convexHull;
    id <CHStrokeIdentifier> _strokeIdentifier;
    double _startTimestamp;
    double _endTimestamp;
    double _curvature;
    struct CGRect _bounds;
}

@property (retain, nonatomic, readonly) id <CHStrokeIdentifier> strokeIdentifier;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) double startTimestamp;
@property (nonatomic, readonly) double endTimestamp;
@property (nonatomic, readonly) vector_2e7754b6 *convexHull;
@property (nonatomic, readonly) double curvature;

+ (id)substrokesForStroke:(id)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithStrokeIdentifier:(id)arg1 bounds:(struct CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const vector_2e7754b6 *)arg5 curvature:(double)arg6;

@end
