/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class TMLPoint, TMLSize;

@interface TMLRect : NSObject

{
    struct CGRect _rect;
}

@property (nonatomic, readonly) struct CGRect rect;
@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) TMLPoint *origin;
@property (nonatomic, readonly) TMLSize *size;
@property (nonatomic, readonly) double minx;
@property (nonatomic, readonly) double midx;
@property (nonatomic, readonly) double maxx;
@property (nonatomic, readonly) double miny;
@property (nonatomic, readonly) double midy;
@property (nonatomic, readonly) double maxy;
@property (nonatomic, readonly) TMLPoint *minpoint;
@property (nonatomic, readonly) TMLPoint *midpoint;
@property (nonatomic, readonly) TMLPoint *maxpoint;

+ (void)initializeJSContext:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)CGRectValue;
- (id)initWithRect:(struct CGRect)arg1;
- (id)applyAffineTransform:(id)arg1;
- (id)inset:(double)arg1:(double)arg2;
- (id)originInset:(double)arg1:(double)arg2;
- (id)offset:(double)arg1:(double)arg2;
- (id)withWidth:(double)arg1;
- (id)withHeight:(double)arg1;
- (id)atOriginX:(double)arg1 y:(double)arg2;
- (id)atOrigin:(id)arg1;
- (id)min:(double)arg1:(double)arg2;
- (id)max:(double)arg1:(double)arg2;
- (id)applyScale:(double)arg1;
- (id)integral;

@end
