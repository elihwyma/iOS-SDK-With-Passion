/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGHarvestEligibility : NSObject

+ (_Bool)searchableItemIsEligibleForDeferredHarvesting:(id)arg1;
+ (_Bool)searchableItemIsEligibleForDissectorPipeline:(id)arg1;
+ (_Bool)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(_Bool *)arg2;
+ (CDUnknownBlockType)mailAppItemEligibilityCheckBlock;
+ (CDUnknownBlockType)messagesAppItemEligibilityCheckBlock;
+ (CDUnknownBlockType)genericItemIneligibleBlock;
+ (CDUnknownBlockType)genericItemEligibleBlock;

@end
