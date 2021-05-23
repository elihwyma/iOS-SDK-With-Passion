/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyAction.h>

@class CNContactProperty, CNContactStore, CNHealthStoreManager, CNUINavigationListViewController, NSString, UIAlertController;

@protocol CNScheduler;

__attribute__((visibility("hidden")))
@interface CNEmergencyContactAction : CNPropertyAction

{
    _Bool _addingToEmergency;
    CNContactStore *_contactStore;
    CNHealthStoreManager *_healthStoreManager;
    CNContactProperty *_contactProperty;
    UIAlertController *_alertController;
    CNUINavigationListViewController *_listController;
    id <CNScheduler> _mainThreadScheduler;
}

@property (retain, nonatomic) CNHealthStoreManager *healthStoreManager;
@property (retain, nonatomic) CNContactProperty *contactProperty;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNUINavigationListViewController *listController;
@property (retain, nonatomic) id <CNScheduler> mainThreadScheduler;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) _Bool addingToEmergency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performActionWithSender:(id)arg1;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)presentDisambiguationAlertWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 healthStoreManager:(id)arg2 propertyItems:(id)arg3;
- (void)performActionWithContactProperty:(id)arg1 relationship:(id)arg2;
- (void)createMedicalIDWithEmergencyContact:(id)arg1;
- (void)showConfirmRemoveAlertWithSender:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showRelationshipPickerForContactProperty:(id)arg1 sender:(id)arg2;

@end
