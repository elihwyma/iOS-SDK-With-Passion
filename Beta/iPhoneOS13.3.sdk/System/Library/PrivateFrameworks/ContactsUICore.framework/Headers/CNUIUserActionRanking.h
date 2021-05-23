/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@protocol CNUIInteractionAdvisor;

@interface CNUIUserActionRanking : NSObject

{
    id <CNUIInteractionAdvisor> _interactionAdvisor;
}

@property (nonatomic, readonly) id <CNUIInteractionAdvisor> interactionAdvisor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)advisorSettingsForSortingAddresses:(id)arg1 actionType:(id)arg2;
+ (id)constrainMechanismsForActionType:(id)arg1;
+ (id)sortKeyWithUsername:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)advisorSettingsForIdentifyingMostRecentAction:(id)arg1 actionType:(id)arg2;

- (id)init;
- (id)initWithInteractionAdvisor:(id)arg1;
- (id)selectRecentActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)sortActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)sortKeysByRankingAddresses:(id)arg1 actionType:(id)arg2 scheduler:(id)arg3;
- (id)selectMostRecentActionFromItems:(id)arg1;

@end
