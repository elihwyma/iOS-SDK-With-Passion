/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMapTable, NSMutableSet;

@interface DAPowerAssertionManager : NSObject

{
    NSCountedSet *_contexts;
    NSMapTable *_groupIdentifierToContexts;
    NSMapTable *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    NSMapTable *_contextToPowerAssertionRef;
}

@property (retain, nonatomic) NSCountedSet *contexts;
@property (retain, nonatomic) NSMapTable *groupIdentifierToContexts;
@property (retain, nonatomic) NSMapTable *contextToGroupIdentifier;
@property (retain, nonatomic) NSMutableSet *heldAsideGroupIdentifiers;
@property (retain, nonatomic) NSCountedSet *heldAsideContexts;
@property (retain, nonatomic) NSMapTable *contextToPowerAssertionRef;

+ (id)sharedPowerAssertionManager;
+ (void)vendDaemons:(Class)arg1;

- (id)init;
- (id)stateString;
- (void)releasePowerAssertion:(id)arg1;
- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;
- (_Bool)_retainAssertionForContext:(id)arg1;
- (_Bool)_releaseAssertionForContext:(id)arg1;
- (unsigned long long)powerAssertionRetainCount:(id)arg1;

@end
