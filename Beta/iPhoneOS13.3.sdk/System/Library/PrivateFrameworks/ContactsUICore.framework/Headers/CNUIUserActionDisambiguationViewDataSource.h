/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/CNUIUserActionListDataSource.h>

@class NSString;

@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool tracksChanges;

- (id)categoriesForContactActionsView:(id)arg1;
- (id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2;

@end
