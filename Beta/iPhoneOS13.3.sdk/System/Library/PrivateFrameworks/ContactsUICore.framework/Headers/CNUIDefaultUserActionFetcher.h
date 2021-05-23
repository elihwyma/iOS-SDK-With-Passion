/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CRRecentContactsLibrary, NSString;

@interface CNUIDefaultUserActionFetcher : NSObject

{
    CRRecentContactsLibrary *_library;
}

@property (nonatomic, readonly) CRRecentContactsLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)recentContactsForUserActionItem:(id)arg1 recentsLibrary:(id)arg2 scheduler:(id)arg3;
+ (id)defaultActionItemForActionItem:(id)arg1 recentContacts:(id)arg2;
+ (id)queryForUserActionItem:(id)arg1;
+ (_Bool)doesRecentContact:(id)arg1 matchUserActionItem:(id)arg2;

- (id)init;
- (id)observableForDefaultActionsChanged;
- (id)defaultActionItemForActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithRecentsLibrary:(id)arg1;

@end
