/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFCustomTableItem.h>

@class NSArray;

@interface WFSegmentedControlTableItem : WFCustomTableItem

{
    NSArray *_possibleValues;
}

@property (copy, nonatomic, readonly) NSArray *possibleValues;

+ (id)itemWithInitialValue:(id)arg1 possibleValues:(id)arg2;

- (void)configureCell:(id)arg1;
- (void)segmentedControlSelectedItemAtIndex:(unsigned long long)arg1;

@end
