/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, _UIInterfaceActionSeparatorConstraintController;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionVibrantSeparatorView : UIView

{
    double _horizontalLineLeadingInset;
    _UIInterfaceActionSeparatorConstraintController *_separatorViewConstraints;
}

@property (retain, nonatomic, readonly) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double constantAxisDimension;
@property (nonatomic) double horizontalLineLeadingInset;

- (id)init;
- (void)updateConstraints;
- (void)setConstantSizedAxis:(long long)arg1;
- (long long)constantSizedAxis;
- (void)_updateContentDirectionalInsets;
- (void)_setupEffectView;

@end
