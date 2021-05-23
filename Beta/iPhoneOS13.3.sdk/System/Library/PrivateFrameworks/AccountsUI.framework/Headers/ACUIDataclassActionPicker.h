/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACDataclassAction, NSArray, NSMutableArray;

@interface ACUIDataclassActionPicker : NSObject

{
    NSMutableArray *_affectedDataclasses;
    ACAccount *_affectedAccount;
    NSArray *_actions;
}

@property (nonatomic, readonly) NSArray *actions;
@property (copy, nonatomic) NSArray *affectedDataclasses;
@property (nonatomic, readonly) ACAccount *affectedAccount;
@property (nonatomic, readonly) _Bool hasDestructiveActions;
@property (nonatomic, readonly) ACDataclassAction *firstDestructiveAction;
@property (nonatomic, readonly) long long priorityIndex;

- (id)title;
- (id)message;
- (id)showInViewController:(id)arg1;
- (id)actionOfType:(long long)arg1;
- (id)descriptionForDataclassAction:(id)arg1;
- (_Bool)hasActionOfType:(long long)arg1;
- (id)_stringForMessage:(id)arg1 withAccountType:(id)arg2 dataclassDescription:(id)arg3;
- (id)initWithActions:(id)arg1 affectingAccount:(id)arg2;
- (void)addAffectedDataclass:(id)arg1;

@end
