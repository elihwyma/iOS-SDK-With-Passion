/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class MapsSuggestionsFakePullSource, NSMutableArray, NSString, _MapsSuggestionsFakeSourceScripterStep;

@protocol OS_dispatch_queue;

@interface MapsSuggestionsFakeSourceScripter : NSObject <Swift>

{
    NSMutableArray *_steps;
    _MapsSuggestionsFakeSourceScripterStep *_previousStep;
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsFakePullSource *_fakeSource;
}

@property (retain, nonatomic) MapsSuggestionsFakePullSource *fakeSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)initWithFakeSource:(id)arg1;
- (void)addEntriesToAdd:(struct NSArray *)arg1;
- (void)sendNextNow;
- (void)sendNextAfterSeconds:(double)arg1;
- (void)_sendStep:(id)arg1;
- (void)resendSameNow;
- (void)resendSameAfterSeconds:(double)arg1;

@end
