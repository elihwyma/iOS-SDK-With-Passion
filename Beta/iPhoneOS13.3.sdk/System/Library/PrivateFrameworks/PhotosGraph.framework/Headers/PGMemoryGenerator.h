/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGMemoryController;

@interface PGMemoryGenerator : NSObject

{
    _Bool _isDebug;
    unsigned long long _duration;
    unsigned long long _precision;
    PGMemoryController *_controller;
}

@property (readonly) _Bool canFallbackToDejunkAndDedupeForShowMore;
@property _Bool isDebug;
@property unsigned long long duration;
@property unsigned long long precision;
@property (weak, readonly) PGMemoryController *controller;

+ (long long)titleDateMatchingTypeForMemoryCategory:(unsigned long long)arg1;
+ (id)assetPropertySetsForMemories;

- (id)initWithController:(id)arg1;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)generateMemories:(unsigned long long)arg1;
- (id)_createMemoryDebugWithPotentialMemory:(id)arg1;
- (id)generateMemory;
- (id)generateAllMemories;
- (id)_generateMemoryForDryTesting;
- (void)setDefaultValuesIfNeededOnNewMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateDefaultTitleAndSubtitleForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (_Bool)_eventIsAcceptableForUpgrade:(id)arg1;
- (_Bool)canProceedAfterAttemptingWeekendUpgradeForPotentialMemory:(id)arg1 upgradedToWeekend:(_Bool *)arg2;
- (_Bool)canProceedAfterAttemptingMeaningfulEventUpgradeForPotentialMemory:(id)arg1 didUpgradeToWeekend:(_Bool)arg2 upgradedToMeaningfulEvent:(_Bool *)arg3;
- (_Bool)canProceedAfterAttemptingUpgradesForPotentialMemory:(id)arg1;
- (void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)arg1 attemptUpgradesBeforeSorting:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)_numberOfIndependentMomentNodesInMomentNodes:(id)arg1;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)arg1;
- (void)_mergeCurationSetsIfNeededForMemory:(id)arg1;
- (id)createMemoryWithPotentialMemory:(id)arg1;

@end
