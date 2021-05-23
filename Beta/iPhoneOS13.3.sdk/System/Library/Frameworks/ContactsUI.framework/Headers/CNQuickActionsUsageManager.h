/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, NSArray, NSCountedSet, NSDate, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CNQuickActionsUsageManager : NSObject

{
    _Bool _sortsWithDuet;
    NSCountedSet *_actionsUsageSet;
    NSMutableSet *_enabledActionIdentifiers;
    CNContact *_contact;
    NSArray *_cachedInteractions;
    NSDate *_cachedInteractionsDate;
}

@property (retain, nonatomic) NSCountedSet *actionsUsageSet;
@property (retain, nonatomic) NSMutableSet *enabledActionIdentifiers;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *cachedInteractions;
@property (retain, nonatomic) NSDate *cachedInteractionsDate;
@property (nonatomic) _Bool sortsWithDuet;

+ (_Bool)sortUsingCoreDuetAvailable;
+ (id)managerForContact:(id)arg1;

- (id)init;
- (void)actionPerformed:(id)arg1;
- (double)scoreForAction:(id)arg1;
- (void)cacheEnabledStateForAction:(id)arg1;
- (void)updateCachedEnabledStateForAction:(id)arg1;
- (void)_updateDuetInteractionsIfNeeded;
- (id)sortedActions:(id)arg1;

@end
