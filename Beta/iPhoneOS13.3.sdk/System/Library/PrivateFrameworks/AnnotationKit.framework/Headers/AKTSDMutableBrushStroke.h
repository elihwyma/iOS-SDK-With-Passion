/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKTSDBrushStroke.h>

@class NSString, UIColor;

@interface AKTSDMutableBrushStroke : AKTSDBrushStroke

{
    int join;
    UIColor *color;
    double width;
    double miterLimit;
    NSString *strokeName;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double width;
@property (nonatomic) int join;
@property (nonatomic) double miterLimit;
@property (copy, nonatomic) NSString *strokeName;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
