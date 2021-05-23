/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSLayoutConstraint, UIView;

@protocol UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSeparatorConstraintController : NSObject

{
    double _constantAxisDimension;
    UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *_separatorView;
    NSLayoutConstraint *_fixedHeightConstraint;
    NSLayoutConstraint *_fixedWidthConstraint;
    long long _constantSizedAxis;
}

@property (weak, nonatomic, readonly) UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *separatorView;
@property (nonatomic, readonly) NSLayoutConstraint *fixedHeightConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *fixedWidthConstraint;
@property (nonatomic) long long constantSizedAxis;
@property (nonatomic) double constantAxisDimension;

- (void)_updateConstantSizedConstraints;
- (_Bool)_isFixedWidth;
- (id)initWithSeparatorView:(id)arg1;
- (void)separatorViewDidUpdateConstraints;

@end
