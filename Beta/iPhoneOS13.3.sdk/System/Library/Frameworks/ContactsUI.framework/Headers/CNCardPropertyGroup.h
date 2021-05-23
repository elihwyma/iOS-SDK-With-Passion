/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNCardGroup.h>

@class CNContactStore, CNPolicy, NSArray, NSDictionary, NSString;

@interface CNCardPropertyGroup : CNCardGroup

{
    NSArray *_propertyItems;
    NSArray *_displayItems;
    NSArray *_editingItems;
    NSArray *_originalEditingItems;
    _Bool _showActionsWhenEmpty;
    _Bool _allowsDisplayModePickerActions;
    _Bool _isAdded;
    NSString *_property;
    CNPolicy *_policy;
    NSDictionary *_linkedPolicies;
    CNContactStore *_contactStore;
    NSArray *_deletedItems;
}

@property (retain, nonatomic) NSArray *editingItems;
@property (retain, nonatomic) NSArray *deletedItems;
@property (nonatomic, readonly) NSString *property;
@property (nonatomic, readonly) NSArray *propertyItems;
@property (nonatomic, readonly) CNPolicy *policy;
@property (nonatomic, readonly) NSDictionary *linkedPolicies;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic) _Bool showActionsWhenEmpty;
@property (nonatomic) _Bool allowsDisplayModePickerActions;
@property (nonatomic, readonly, getter=isMultiValue) _Bool multiValue;
@property (nonatomic, readonly, getter=isFixedValue) _Bool fixedValue;
@property (nonatomic, readonly, getter=isMultiLine) _Bool multiLine;
@property (nonatomic, readonly) _Bool allowsAdding;
@property (nonatomic, readonly) _Bool modified;
@property (nonatomic) _Bool isAdded;

+ (id)groupForProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5;

- (id)description;
- (id)displayItems;
- (void)saveChanges;
- (Class)propertyGroupItemClass;
- (id)initWithProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5;
- (id)nextAvailableLabel;
- (_Bool)addEditingItem;
- (void)removeEditingItem:(id)arg1;
- (id)lastEditingItem;
- (void)reloadDataPreservingChanges:(_Bool)arg1;
- (id)_loadPropertyItems;
- (id)_mergeItems:(id)arg1 forEditing:(_Bool)arg2;
- (id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(_Bool)arg3;
- (_Bool)_shouldShowGroupWhenEditing:(_Bool)arg1;
- (_Bool)isRequired;
- (_Bool)labelsAreUnique;
- (_Bool)canAddEditingItem;
- (_Bool)_arrayContainsMaxAllowedItems:(id)arg1;
- (void)_updateNameValuesForItems:(id)arg1;
- (id)policyForItem:(id)arg1;
- (void)saveChangesForItems:(id)arg1;
- (id)labelsForItem:(id)arg1 options:(unsigned long long)arg2;
- (id)labelsInUseByGroup;
- (id)itemsUsingLabel:(id)arg1;
- (id)_availableLabelsInLabels:(id)arg1 forItem:(id)arg2 withValueSelector:(SEL)arg3 usedLabelsCount:(long long *)arg4;
- (id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2;
- (id)_nextAvailableLabel;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableSocialService;

@end
