/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, UIFont, UIKeyCommandDiscoverabilityHUDVisualStyle, UILayoutGuide;

@protocol UIKeyCommandDiscoverabilityHUDColumnViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDColumnView : UIView

{
    id <UIKeyCommandDiscoverabilityHUDColumnViewDelegate> _delegate;
    UIKeyCommandDiscoverabilityHUDVisualStyle *_visualStyle;
    UIFont *_baseFont;
    UILayoutGuide *_descriptionColumnLayoutGuide;
    UILayoutGuide *_modifiersColumnLayoutGuide;
    UILayoutGuide *_inputStringColumnLayoutGuide;
    NSArray *_descriptionViews;
    NSArray *_modifierViews;
    NSArray *_inputStringViews;
    NSArray *_constraints;
    double _fontScaleFactor;
}

@property (nonatomic) double fontScaleFactor;

- (id)initWithDelegate:(id)arg1;
- (void)setKeyCommands:(id)arg1 withVisualStyle:(id)arg2;

@end
