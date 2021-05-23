/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSectionedGridLayoutAttributes.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface PUImportSectionedGridLayoutAttributes : PUSectionedGridLayoutAttributes

{
    UIColor *_backgroundColor;
    double _strokeWidth;
    UIColor *_bottomStrokeColor;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *bottomStrokeColor;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
