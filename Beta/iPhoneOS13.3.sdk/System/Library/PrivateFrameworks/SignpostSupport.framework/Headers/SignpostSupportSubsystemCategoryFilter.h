/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSPredicate;

@interface SignpostSupportSubsystemCategoryFilter : NSObject

{
    NSMutableDictionary *_subsystemsDict;
}

@property (nonatomic, readonly) NSMutableDictionary *subsystemsDict;
@property (nonatomic, readonly) unsigned long long _compoundPredicateType;
@property (nonatomic, readonly) _Bool _wantsNotSubsystem;
@property (nonatomic, readonly) NSPredicate *predicateEquivalent;

- (id)debugDescription;
- (void)addEntry:(id)arg1;
- (id)_initWithEntries:(id)arg1;
- (_Bool)passesSubsystem:(id)arg1 category:(id)arg2;
- (id)liveStreamingPredicate;
- (void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2;
- (id)_subpredicatesForSubsystemsWithIsSimplified:(_Bool)arg1;
- (id)_predicateEquivalentWithIsSimplified:(_Bool)arg1;
- (void)_fixupToSupportFramerateCalculation;
- (_Bool)matchesSubsystem:(id)arg1 category:(id)arg2;
- (void)addSubsystem:(id)arg1 category:(id)arg2;

@end
