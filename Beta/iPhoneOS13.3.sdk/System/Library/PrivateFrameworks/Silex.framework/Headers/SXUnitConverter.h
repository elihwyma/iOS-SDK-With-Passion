/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXUnitConverter : NSObject

{
    double _componentWidth;
    double _parentWidth;
    double _documentGutter;
    double _documentMargin;
    double _contentScaleFactor;
    struct CGSize _viewportSize;
}

@property (nonatomic, readonly) double componentWidth;
@property (nonatomic, readonly) double parentWidth;
@property (nonatomic, readonly) double documentGutter;
@property (nonatomic, readonly) double documentMargin;
@property (nonatomic, readonly) struct CGSize viewportSize;
@property (nonatomic, readonly) double contentScaleFactor;

- (double)convertValueToPoints:(struct _SXConvertibleValue)arg1;
- (double)convertViewportHeightToPoints:(double)arg1;
- (double)convertViewportWidthToPoints:(double)arg1;
- (double)convertViewportMinToPoints:(double)arg1;
- (double)convertViewportMaxToPoints:(double)arg1;
- (double)convertColumnGutterToPoints:(double)arg1;
- (double)convertComponentWidthToPoints:(double)arg1;
- (double)convertDocumentMarginToPoints:(double)arg1;
- (double)convertParentWidthToPoints:(double)arg1;
- (id)initWithComponentWidth:(double)arg1 parentWidth:(double)arg2 documentGutter:(double)arg3 documentMargin:(double)arg4 viewportSize:(struct CGSize)arg5 contentScaleFactor:(double)arg6;

@end
