/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <SignpostSupport/SignpostSupportSubsystemCategoryFilter.h>

@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter

- (id)initWithEntries:(id)arg1;
- (_Bool)passesSubsystem:(id)arg1 category:(id)arg2;
- (id)liveStreamingPredicate;
- (void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2;
- (_Bool)_wantsNotSubsystem;
- (unsigned long long)_compoundPredicateType;

@end
