/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSDWrappable <Swift>

@property (nonatomic, readonly) _Bool hasAlpha;

- (unsigned short)parent;
- (unsigned short)wrapPolygon;
- (unsigned short)boundsInfluencingExteriorWrap;
- (unsigned short)boundsInRoot;
- (unsigned short)isHTMLWrap;
- (unsigned short)wrapType;
- (unsigned short)wrapDirection;
- (unsigned short)wrapFitType;

@end
