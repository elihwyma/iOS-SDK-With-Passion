/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <TouchML/Swift-Protocol.h>

@class TMLPoint, TMLSize;

@protocol TMLRectJSExports <Swift>

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

- (unsigned short)applyAffineTransform: /* Error: Ran out of types for this method. */;
- (unsigned short)inset:: /* Error: Ran out of types for this method. */;
- (unsigned short)originInset:: /* Error: Ran out of types for this method. */;
- (unsigned short)offset:: /* Error: Ran out of types for this method. */;
- (unsigned short)withWidth: /* Error: Ran out of types for this method. */;
- (unsigned short)withHeight: /* Error: Ran out of types for this method. */;
- (unsigned short)atOriginX:y: /* Error: Ran out of types for this method. */;
- (unsigned short)atOrigin: /* Error: Ran out of types for this method. */;
- (unsigned short)min:: /* Error: Ran out of types for this method. */;
- (unsigned short)max:: /* Error: Ran out of types for this method. */;
- (unsigned short)applyScale: /* Error: Ran out of types for this method. */;
- (unsigned short)integral;

@end
