/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <OnBoardingKit/OBHeaderView.h>

@interface OBSetupAssistantHeaderView : OBHeaderView

{
    _Bool _hasTitle;
    double _distanceFromTop;
}

@property (nonatomic) double distanceFromTop;
@property (nonatomic) _Bool hasTitle;

- (double)bottomPadding;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 distanceToTopInset:(double)arg3;
- (id)initWithTitle:(id)arg1 symbolName:(id)arg2 distanceToTopInset:(double)arg3;
- (id)initWithTitle:(id)arg1 symbolName:(id)arg2;
- (id)initWithTitle:(id)arg1 icon:(id)arg2;
- (double)topPadding;
- (double)iconToHeaderLabelPadding;
- (double)headerLabelToDetailLabelPadding;
- (double)detailLabelToAccessoryButtonPadding;

@end
