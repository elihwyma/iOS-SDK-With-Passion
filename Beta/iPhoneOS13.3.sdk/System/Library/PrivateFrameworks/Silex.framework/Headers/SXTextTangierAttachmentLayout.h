/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSDDrawableLayout.h>

@class TSDWrapPolygon;

@interface SXTextTangierAttachmentLayout : TSDDrawableLayout

{
    TSDWrapPolygon *_polygon;
}

@property (retain, nonatomic) TSDWrapPolygon *polygon;

- (void)validate;
- (id)wrapPolygon;
- (void)fixTransformFromInterimPosition;
- (void)storeActualPosition;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (struct CGRect)boundsInRoot;

@end
