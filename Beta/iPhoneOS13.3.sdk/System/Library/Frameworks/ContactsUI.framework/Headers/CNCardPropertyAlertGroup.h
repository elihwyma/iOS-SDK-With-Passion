/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNCardPropertyGroup.h>

@class CNLabeledValue;

__attribute__((visibility("hidden")))
@interface CNCardPropertyAlertGroup : CNCardPropertyGroup

{
    CNLabeledValue *_labeledValue;
}

@property (retain, nonatomic) CNLabeledValue *labeledValue;

- (id)_loadPropertyItems;

@end
