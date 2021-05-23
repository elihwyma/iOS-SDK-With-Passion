/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberControllerShared : NSObject

+ (id)formattedNameOfFamilyMember:(id)arg1;
+ (id)contactViewControllerForContact:(id)arg1 fromStore:(id)arg2;
+ (id)contactMatchingFamilyMemberContactItem:(id)arg1 fetchedFromContactStore:(id)arg2 schedulerProvider:(id)arg3;
+ (id)addContactsOptionsSheetForFamilyMember:(id)arg1 delegate:(id)arg2;
+ (id)addContactsToWhitelistOptionsSheetForFamilyMember:(id)arg1 offerChooseFromFamilyMemberContactsOption:(_Bool)arg2 delegate:(id)arg3;
+ (long long)contactsUIFetchStatusFromContactsUICoreFetchStatus:(long long)arg1;

@end
