/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDInteractionStore, _CDQueryInteractionAdvisor, _CDSocialInteractionAdvisor, _CDTemporalInteractionAdvisor;

@interface _CDInteractionAdviceEngine : NSObject

{
    _CDInteractionStore *_store;
    _CDTemporalInteractionAdvisor *_temporalAdvisor;
    _CDSocialInteractionAdvisor *_socialAdvisor;
    _CDQueryInteractionAdvisor *_queryAdvisor;
}

@property (nonatomic, readonly) _CDSocialInteractionAdvisor *socialAdvisor;
@property (nonatomic, readonly) _CDTemporalInteractionAdvisor *temporalAdvisor;

+ (id)interactionAdviceEngineWithStore:(id)arg1;

- (id)initWithStore:(id)arg1;
- (id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsUsingSettings:(id)arg1;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2;
- (id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;

@end
