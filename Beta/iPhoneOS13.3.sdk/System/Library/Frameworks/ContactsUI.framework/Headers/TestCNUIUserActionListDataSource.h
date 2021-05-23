/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TestCNUIUserActionListDataSource : NSObject

{
    _Bool _tracksChanges;
    NSDictionary *_userActionListModelResultBlocksByActionTypeAskedFor;
    NSDictionary *_actionsByActionTypeByContact;
    CNContact *_contact;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSDictionary *userActionListModelResultBlocksByActionTypeAskedFor;
@property (nonatomic, readonly) NSDictionary *actionsByActionTypeByContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool tracksChanges;

+ (id)allActionTypes;
+ (id)allSupportedActionTypes;
+ (id)allSupportedActionTypesWithCapabilities:(id)arg1;

- (id)actionTypesForConsumer:(id)arg1;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
- (id)consumer:(id)arg1 imageForActionType:(id)arg2;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2;
- (id)initWithActionsByActionTypeByContact:(id)arg1;

@end
