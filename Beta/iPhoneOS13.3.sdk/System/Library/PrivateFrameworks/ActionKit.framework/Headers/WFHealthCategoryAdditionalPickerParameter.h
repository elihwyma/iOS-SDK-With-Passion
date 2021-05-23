/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKCategoryType, NSArray;

@interface WFHealthCategoryAdditionalPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    HKCategoryType *_categoryType;
}

@property (retain, nonatomic) HKCategoryType *categoryType;

- (_Bool)isHidden;
- (id)possibleStates;
- (id)localizedLabel;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)updatePossibleStates;

@end
