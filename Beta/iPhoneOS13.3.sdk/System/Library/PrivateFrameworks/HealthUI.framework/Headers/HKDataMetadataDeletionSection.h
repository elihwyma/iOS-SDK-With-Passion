/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSection.h>

@class NSString, UITableViewCell;

@protocol HKDataMetadataDeletionSectionDelegate;

@interface HKDataMetadataDeletionSection : HKDataMetadataSection

{
    _Bool _enabled;
    id <HKDataMetadataDeletionSectionDelegate> _delegate;
    UITableViewCell *_cell;
    NSString *_title;
}

@property (retain, nonatomic) UITableViewCell *cell;
@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) id <HKDataMetadataDeletionSectionDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)init;
- (id)initWithTitle:(id)arg1;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)_updateCellForEnabledState;

@end
