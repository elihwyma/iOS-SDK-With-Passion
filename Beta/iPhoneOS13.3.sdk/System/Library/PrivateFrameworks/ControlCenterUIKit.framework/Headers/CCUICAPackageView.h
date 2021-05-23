/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIView.h>

@class CALayer, CAPackage, CAStateController, CCUICAPackageDescription;

@interface CCUICAPackageView : UIView

{
    CAStateController *_stateController;
    UIView *_packageContentView;
    CALayer *_packageLayer;
    CAPackage *_package;
    CCUICAPackageDescription *_packageDescription;
    double _scale;
}

@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CCUICAPackageDescription *packageDescription;
@property (nonatomic) double scale;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setPackage:(id)arg1;
- (void)setStateName:(id)arg1;

@end
