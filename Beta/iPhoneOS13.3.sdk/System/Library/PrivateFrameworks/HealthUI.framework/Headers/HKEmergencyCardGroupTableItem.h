/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class NSArray, NSMutableArray;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem

{
    NSMutableArray *_cumulativeRowOffsets;
    NSArray *_subitems;
}

@property (retain, nonatomic) NSArray *subitems;

- (void)setData:(id)arg1;
- (long long)numberOfRows;
- (void)setOwningViewController:(id)arg1;
- (void)commitEditing;
- (_Bool)hasPresentableData;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)_getSubitem:(id *)arg1 andSubitemRow:(long long *)arg2 forTableViewRow:(long long)arg3;

@end
