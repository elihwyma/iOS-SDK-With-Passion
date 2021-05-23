/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NSString, NTKBezierPathPointModel, UIBezierPath, UIColor;

@interface NTKBezierPathView : UIView

{
    UIBezierPath *_path;
    UIBezierPath *_animateToPath;
    NTKBezierPathPointModel *_pointModel;
    UIColor *_pathColor;
}

@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic, readonly) NTKBezierPathPointModel *pointModel;
@property (retain, nonatomic) UIColor *pathColor;
@property (retain, nonatomic) NSString *lineCap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layerClass;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)_shapeLayer;
- (struct CGPoint)pointOnPathForHorizontalPercentage:(double)arg1;
- (void)animateToPath:(id)arg1 duration:(double)arg2 curve:(long long)arg3;

@end
