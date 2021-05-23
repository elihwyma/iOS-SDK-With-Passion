/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyAction.h>

@class CNContact, CNHealthStoreManager, NSString;

__attribute__((visibility("hidden")))
@interface CNMedicalIDAction : CNPropertyAction

{
    long long _medicalIDActionType;
    CNHealthStoreManager *_healthStoreManager;
}

@property (nonatomic) long long medicalIDActionType;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNHealthStoreManager *healthStoreManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performActionWithSender:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidFinish:(id)arg1;

@end
