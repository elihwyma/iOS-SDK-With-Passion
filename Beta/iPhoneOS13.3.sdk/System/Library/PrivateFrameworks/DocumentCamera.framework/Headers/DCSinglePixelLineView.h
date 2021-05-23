/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface DCSinglePixelLineView : UIView

{
    _Bool _hasSetUpSizeConstraint;
}

@property (nonatomic) _Bool hasSetUpSizeConstraint;

- (void)updateConstraints;
- (void)setUpHeightConstraintIfNecessary;
- (id)findSizeLayoutConstraintIfExists;
- (id)addSizeConstraint;

@end
