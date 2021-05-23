/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMLineShapeBuilder.h>

@class OADPath;

__attribute__((visibility("hidden")))
@interface CMFreeFormShapeBuilder : CMLineShapeBuilder

{
    OADPath *_path;
    struct CGSize _space;
}

- (void)setPath:(id)arg1;
- (struct CGAffineTransform)affineTransform;
- (void)setSpace:(struct CGSize)arg1;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;
- (struct CGPoint)_renderPathElement:(id)arg1 withTransform:(struct CGAffineTransform)arg2 inPath:(struct CGPath *)arg3;

@end
