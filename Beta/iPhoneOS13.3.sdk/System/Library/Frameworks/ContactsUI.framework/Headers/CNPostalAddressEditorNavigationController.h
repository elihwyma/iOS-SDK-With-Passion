/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UINavigationController.h>

@protocol CNPostalAddressEditorDelegate;

@interface CNPostalAddressEditorNavigationController : UINavigationController

{
    id <CNPostalAddressEditorDelegate> _addressEditorDelegate;
}

@property (weak, nonatomic) id <CNPostalAddressEditorDelegate> addressEditorDelegate;

- (void)setTitle:(id)arg1;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(_Bool)arg3;
- (id)initWithPropertyKey:(id)arg1 label:(id)arg2;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 addressDictionary:(id)arg3 label:(id)arg4;
- (void)doneWithContact:(id)arg1 propertyKey:(id)arg2;

@end
