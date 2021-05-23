/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteAggdProbe, NSMutableDictionary, NSString;

@interface CNAutocompleteAggdPerformanceProbe : NSObject

{
    CNAutocompleteAggdProbe *_aggdProbe;
    NSMutableDictionary *_pendingAddData;
}

@property (retain, nonatomic) CNAutocompleteAggdProbe *aggdProbe;
@property (nonatomic, readonly) NSMutableDictionary *pendingAddData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(_Bool)arg4;
- (void)sendData;
- (void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (id)initWithAggdProbe:(id)arg1;
- (void)recordLatency:(double)arg1 forResultCount:(unsigned long long)arg2 forSource:(id)arg3;

@end
