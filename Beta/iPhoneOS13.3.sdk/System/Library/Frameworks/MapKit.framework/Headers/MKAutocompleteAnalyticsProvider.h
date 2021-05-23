/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKAutocompleteAnalyticsState;

@protocol OS_dispatch_queue;

@interface MKAutocompleteAnalyticsProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKAutocompleteAnalyticsState *_currentState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain, nonatomic) MKAutocompleteAnalyticsState *currentState;

- (id)init;
- (id)captureNewMetrics;
- (void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3;

@end
