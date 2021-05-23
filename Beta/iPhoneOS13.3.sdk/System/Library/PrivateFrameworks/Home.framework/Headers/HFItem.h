/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFItemManager, NAFuture, NSDictionary;

@interface HFItem : NSObject

{
    _Bool __debug_isChildItem;
    NSDictionary *_latestResults;
    unsigned long long _loadingState;
    NAFuture *_cancellableInFlightUpdateFuture;
    HFItemManager *__debug_owningItemManager;
}

@property (weak, nonatomic) NAFuture *cancellableInFlightUpdateFuture;
@property (nonatomic) unsigned long long loadingState;
@property (weak, nonatomic) HFItemManager *_debug_owningItemManager;
@property (nonatomic) _Bool _debug_isChildItem;
@property (retain, nonatomic) NSDictionary *latestResults;

- (id)description;
- (id)debugDescription;
- (id)updateWithOptions:(id)arg1;
- (void)copyLatestResultsFromItem:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_finalOutcomeForSubclassOutcome:(id)arg1 previousResults:(id)arg2 updateOptions:(id)arg3;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (_Bool)resultsContainRequiredProperties:(id)arg1;

@end
