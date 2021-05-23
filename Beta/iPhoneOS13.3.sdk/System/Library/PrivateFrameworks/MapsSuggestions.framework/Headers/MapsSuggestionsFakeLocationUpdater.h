/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>

@class NSString;

@interface MapsSuggestionsFakeLocationUpdater : MapsSuggestionsBaseLocationUpdater

{
    _Bool _isRunning;
    unsigned long long _calledStartImplementation;
    unsigned long long _calledStopImplementation;
}

@property (nonatomic, readonly) unsigned long long calledStartImplementation;
@property (nonatomic, readonly) unsigned long long calledStopImplementation;
@property (nonatomic, readonly) _Bool isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (void)sendLocation:(id)arg1;
- (void)startImplemention;
- (void)stopImplementation;
- (void)sendVisit:(id)arg1;

@end
