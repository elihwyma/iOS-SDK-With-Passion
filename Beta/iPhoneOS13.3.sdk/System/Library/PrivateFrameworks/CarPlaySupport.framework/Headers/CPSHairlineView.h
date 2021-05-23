/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface CPSHairlineView : UIView

{
    long long _axis;
    NSLayoutConstraint *_strokeThicknessConstraint;
}

@property (nonatomic) long long axis;
@property (retain, nonatomic) NSLayoutConstraint *strokeThicknessConstraint;

+ (id)grayHairlineViewAlongAxis:(long long)arg1;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithAxis:(long long)arg1 color:(id)arg2;
- (void)_updateStrokeThickness;

@end
