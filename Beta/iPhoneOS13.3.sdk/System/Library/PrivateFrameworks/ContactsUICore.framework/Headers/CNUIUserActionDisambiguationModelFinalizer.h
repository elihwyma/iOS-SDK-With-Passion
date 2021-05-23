/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNUIUserActionItem, NSArray, NSMutableArray;

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject

{
    CNUIUserActionItem *_defaultAction;
    NSMutableArray *_actions;
    NSArray *_recentActions;
    NSArray *_directoryServiceActions;
    NSArray *_foundOnDeviceActions;
}

@property (retain, nonatomic) CNUIUserActionItem *defaultAction;
@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) NSArray *recentActions;
@property (retain, nonatomic) NSArray *directoryServiceActions;
@property (retain, nonatomic) NSArray *foundOnDeviceActions;

+ (id)modelWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5;

- (id)model;
- (id)initWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5;
- (void)removeUninterestingItentActions;
- (void)removeDiscoveredActionsAlreadyCurated;
- (void)removeDuplicateIntentActionsFromSameProvider;
- (void)promoteLoneManagedCallProviderActionToBeDefault;
- (void)promoteLoneActionToBeDefault;
- (void)removeDefaultActionFromListOfActions;

@end
