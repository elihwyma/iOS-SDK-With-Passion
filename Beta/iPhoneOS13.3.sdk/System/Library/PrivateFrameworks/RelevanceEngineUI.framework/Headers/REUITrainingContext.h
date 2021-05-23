/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngine/RETrainingContext.h>

@class NSArray, NSMutableDictionary;

@interface REUITrainingContext : RETrainingContext

{
    NSMutableDictionary *_becameVisibleDates;
    NSMutableDictionary *_visibilityDurations;
    _Bool _resetsWhenResignsCurrent;
}

@property (nonatomic, readonly) double maximumNegativeDwellTime;
@property (nonatomic, readonly) double minimumPositiveDwellTime;
@property (nonatomic, readonly) unsigned long long onScreenElementCount;
@property (nonatomic, readonly) NSArray *visibleElementIdentifiers;
@property (nonatomic) _Bool resetsWhenResignsCurrent;

- (id)init;
- (void)resetContext;
- (void)_willResignCurrent;
- (_Bool)performSimulationCommand:(id)arg1 withOptions:(id)arg2;
- (_Bool)isDisplayingElementWithIdentifier:(id)arg1;
- (void)elementWithIdentifierDidEndDisplay:(id)arg1;
- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;
- (_Bool)elementIsAvailable:(id)arg1;
- (id)interactionTypeForElement:(id)arg1;
- (void)selectElementWithIdentifier:(id)arg1;
- (void)elementWithIdentifierDidDisplay:(id)arg1;
- (id)_visibleElements;
- (id)_higherElementsThanElement:(id)arg1;
- (id)_lowerElementsThanElement:(id)arg1;
- (id)_interactionForElement:(id)arg1;
- (void)_trainDwellForElement:(id)arg1 withInterval:(double)arg2;

@end
