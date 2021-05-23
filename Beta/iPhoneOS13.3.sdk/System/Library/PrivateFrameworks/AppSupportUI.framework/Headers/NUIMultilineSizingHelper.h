/*
 Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

#import <Foundation/NSObject.h>

@class UIView;

@interface NUIMultilineSizingHelper : NSObject

{
    UIView *_view;
    struct objc_super _view_super;
    double _preferredMaxLayoutWidth;
    struct {
        unsigned int isContainerView:1;
        unsigned int determiningPreferredMaxLayoutWidth:1;
        unsigned int inSecondConstraintsPass:1;
    } _flags;
}

- (void)updateConstraints;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_setInSecondConstraintsPass:(_Bool)arg1;
- (void)_resetToBeginningOfDoublePass;
- (double)preferredMaxLayoutWidth;
- (id)initWithView:(id)arg1 class:(Class)arg2;

@end
