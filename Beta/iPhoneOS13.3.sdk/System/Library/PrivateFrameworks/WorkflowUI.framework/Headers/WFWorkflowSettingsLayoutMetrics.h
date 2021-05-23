/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class UIFont, UITraitCollection;

@interface WFWorkflowSettingsLayoutMetrics : NSObject

{
    UITraitCollection *_traitCollection;
}

@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic, readonly) UIFont *typeSelectionTitleFont;
@property (nonatomic, readonly) UIFont *typeSelectionTypeLabelFont;
@property (nonatomic, readonly) UIFont *emptyStateFont;
@property (nonatomic, readonly) UIFont *emptyStateButtonFont;
@property (nonatomic, readonly) UIFont *textFieldFont;
@property (nonatomic, readonly) struct CGSize tileSize;
@property (nonatomic, readonly) double emptySizeButtonHeight;

- (double)scaledValueForValue:(double)arg1;
- (id)baseFont;
- (id)initWithTraitCollection:(id)arg1;
- (id)scaledFont;

@end
