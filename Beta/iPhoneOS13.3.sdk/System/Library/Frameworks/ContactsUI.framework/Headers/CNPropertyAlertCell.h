/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleCell.h>

@class CNPropertyGroupAlertItem, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyAlertCell : CNPropertySimpleCell

@property (nonatomic, readonly) CNPropertyGroupAlertItem *alertItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)wantsChevron;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)shouldPerformDefaultAction;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (id)alertGroup;
- (_Bool)allowsCellSelection;

@end
