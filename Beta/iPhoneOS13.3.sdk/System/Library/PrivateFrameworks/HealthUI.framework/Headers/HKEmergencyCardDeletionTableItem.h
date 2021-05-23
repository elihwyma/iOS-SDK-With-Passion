/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class UITableViewCell;

@protocol HKEmergencyCardDeletionDelegate;

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem

{
    UITableViewCell *_cell;
    id <HKEmergencyCardDeletionDelegate> _deletionDelegate;
}

@property (weak, nonatomic) id <HKEmergencyCardDeletionDelegate> deletionDelegate;

- (id)title;
- (id)initInEditMode:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;

@end
