/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIContactStoreLinkedContactSaveExecutor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)executeSaveWithConfiguration:(id)arg1;
- (id)saveLinkedContactChanges:(id)arg1 mutableContact:(id)arg2 contactStore:(id)arg3 editingLinkedContacts:(id)arg4 ignoresParentalRestrictions:(_Bool)arg5 saveWasAuthorized:(_Bool)arg6 issuedSaveRequestIdentifiers:(id)arg7;

@end
