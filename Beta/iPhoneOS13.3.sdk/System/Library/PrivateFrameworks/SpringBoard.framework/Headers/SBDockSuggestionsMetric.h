/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, PETDistributionEventTracker, PETScalarEventTracker;

@interface SBDockSuggestionsMetric : NSObject

{
    NSArray *_trackers;
    PETScalarEventTracker *_enabledTracker;
    NSMutableDictionary *_indexToSuggestionType;
    PETDistributionEventTracker *_distTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (_Bool)_trackEvent:(_Bool)arg1 withPayload:(id)arg2;

@end
