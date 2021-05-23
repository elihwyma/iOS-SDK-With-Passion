/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteAggdProbe, NSNumber, NSString;

@interface CNAutocompleteAggdUsageMonitorProbe : NSObject

{
    CNAutocompleteAggdProbe *_aggdProbe;
    NSNumber *_selectedIndex;
    NSNumber *_selectedPredictionIndex;
    NSNumber *_lengthOfSearchString;
    NSNumber *_sourceType;
    NSNumber *_returnedDuetResults;
}

@property (retain, nonatomic) CNAutocompleteAggdProbe *aggdProbe;
@property (retain, nonatomic) NSNumber *selectedIndex;
@property (retain, nonatomic) NSNumber *selectedPredictionIndex;
@property (retain, nonatomic) NSNumber *lengthOfSearchString;
@property (retain, nonatomic) NSNumber *sourceType;
@property (retain, nonatomic) NSNumber *returnedDuetResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)sendData;
- (void)recordDuetReturnedResults:(_Bool)arg1;
- (void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1;
- (void)recordUserSelectedIndex:(unsigned long long)arg1;
- (void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1;
- (void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1;
- (void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
- (void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2;
- (void)recordUserSawPredictions;
- (void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1;
- (void)recordUserSawCuratedResults:(unsigned long long)arg1;
- (id)initWithAggdProbe:(id)arg1;
- (id)sourceKeysForSourceType:(unsigned long long)arg1;

@end
