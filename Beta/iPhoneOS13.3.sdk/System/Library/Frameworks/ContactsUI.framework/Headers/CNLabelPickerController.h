/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPickerController.h>

@class CNPropertyGroupItem, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNLabelPickerController : CNPickerController

{
    CNPropertyGroupItem *_item;
    NSMutableArray *_labelsToDeleteOnCommit;
}

@property (retain) NSMutableArray *labelsToDeleteOnCommit;
@property (weak, nonatomic, readonly) CNPropertyGroupItem *item;

- (id)titleForPickerItem:(id)arg1;
- (id)initForPropertyItem:(id)arg1;
- (void)removeCustomItem:(id)arg1;
- (void)pickedItem:(id)arg1;

@end
