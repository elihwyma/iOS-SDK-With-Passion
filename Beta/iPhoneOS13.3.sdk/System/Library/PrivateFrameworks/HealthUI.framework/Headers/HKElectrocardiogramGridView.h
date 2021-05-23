/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSArray, NSMutableArray, UIBezierPath;

@interface HKElectrocardiogramGridView : UIView

{
    NSArray *_grids;
    UIBezierPath *_controlSignalPath;
    NSMutableArray *_gridLayers;
    CAShapeLayer *_controlSignalLayer;
    struct CGSize _unitSize;
}

@property (retain, nonatomic) NSMutableArray *gridLayers;
@property (retain, nonatomic) NSArray *grids;
@property (retain, nonatomic) CAShapeLayer *controlSignalLayer;
@property (nonatomic) struct CGSize unitSize;
@property (nonatomic, readonly) struct CGSize majorGridSize;
@property (retain, nonatomic) UIBezierPath *controlSignalPath;

- (void)layoutSubviews;
- (id)initWithUnitSize:(struct CGSize)arg1 grids:(id)arg2;
- (void)_createLayers;

@end
