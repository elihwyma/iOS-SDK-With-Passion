/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBlendingHighlightView.h>

@class NSString, _UIInterfaceActionSeparatorConstraintController;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionBlendingSeparatorView : _UIBlendingHighlightView

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
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;
- (long long)constantSizedAxis;
- (void)_updateContentDirectionalInsets;

@end
