/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNQuickActionsUsageManager, CNQuickFaceTimeAction, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOrderedSet, NSString;

@protocol CNQuickActionsManagerDelegate;

__attribute__((visibility("hidden")))
@interface CNQuickActionsManager : NSObject

{
    NSMutableDictionary *_actionsByCategories;
    NSOrderedSet *_actions;
    NSMutableSet *_requests;
    _Bool _bypassActionValidation;
    _Bool _useDuetIfAvailable;
    NSArray *_contacts;
    id <CNQuickActionsManagerDelegate> _delegate;
    NSArray *_categories;
    unsigned long long _desiredNumberOfActions;
    NSMutableArray *_updateBlocks;
    NSDictionary *_groups;
    CNQuickFaceTimeAction *_faceTimeVideoAction;
    CNQuickFaceTimeAction *_faceTimeAudioAction;
    CNQuickActionsUsageManager *_usageManager;
    NSArray *_subManagers;
}

@property (retain, nonatomic) NSMutableArray *updateBlocks;
@property (retain, nonatomic) NSDictionary *groups;
@property (retain, nonatomic) CNQuickFaceTimeAction *faceTimeVideoAction;
@property (retain, nonatomic) CNQuickFaceTimeAction *faceTimeAudioAction;
@property (retain, nonatomic) CNQuickActionsUsageManager *usageManager;
@property (retain, nonatomic) NSArray *subManagers;
@property (retain, nonatomic) NSArray *contacts;
@property (nonatomic, readonly) CNContact *contact;
@property (weak, nonatomic) id <CNQuickActionsManagerDelegate> delegate;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) unsigned long long desiredNumberOfActions;
@property (nonatomic) _Bool bypassActionValidation;
@property (nonatomic) _Bool sortsWithDuet;
@property (nonatomic) _Bool useDuetIfAvailable;
@property (nonatomic, readonly) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)actionsManagerForContacts:(id)arg1;
+ (id)defaultCategories;
+ (_Bool)hasActionsForContact:(id)arg1;

- (void)dealloc;
- (void)_openURL:(id)arg1;
- (void)contactActionDidUpdate:(id)arg1;
- (void)contactAction:(id)arg1 presentViewController:(id)arg2;
- (id)initWithContacts:(id)arg1;
- (void)_createGroupsForPropertyKeys:(id)arg1;
- (id)_orderedLabels;
- (id)_ignoredLabels;
- (_Bool)_shouldGroupActionsInCategory:(id)arg1;
- (id)_groupedActionsFromOrderedActionsByCategories:(id)arg1;
- (id)_hierarchicalActionsForCategory:(id)arg1 fromActions:(id)arg2 askDelegate:(_Bool)arg3;
- (id)_expandedActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2;
- (id)_hybridActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2;
- (void)_addAction:(id)arg1;
- (id)_addActionForPropertyItem:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3;
- (void)_updateActionsForPropertyItems:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3;
- (void)_updateIDSActionsForPropertyItems:(id)arg1 category:(id)arg2 serviceName:(id)arg3 propertyActionClass:(Class)arg4;
- (id)_propertyItemsForKey:(id)arg1;
- (void)updateActionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateSingleContactActions;
- (void)_updateMultiContactActions;
- (void)refreshActionsAndForceSendUpdate:(_Bool)arg1;
- (void)refreshActions;
- (void)stopUpdatingActions;
- (void)_actionsUpdated;
- (void)actionPerformed:(id)arg1;
- (id)quickActions;

@end
