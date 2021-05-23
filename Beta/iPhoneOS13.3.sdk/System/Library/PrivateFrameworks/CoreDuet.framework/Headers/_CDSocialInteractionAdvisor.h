/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDInteractionStore;

@interface _CDSocialInteractionAdvisor : NSObject

{
    _CDInteractionStore *_store;
}

@property (retain) _CDInteractionStore *store;

- (id)initWithStore:(id)arg1;
- (id)rankContacts:(id)arg1 withSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)adviseInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (void)tuneUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;
- (id)recentPredicateForDate:(id)arg1 lambda:(float)arg2 lookAheadWeeks:(int)arg3;
- (id)inSeedPredicateForSeed:(id)arg1;
- (id)keyForModelWithSettings:(id)arg1;

@end
