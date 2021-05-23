/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

#import <CoreHaptics/Swift-Protocol.h>

@class AVHapticPlayerChannel, CHHapticEngine, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PatternPlayer : NSObject <Swift>

{
    CHHapticEngine *_engine;
    AVHapticPlayerChannel *_channel;
    NSArray *_events;
    double _patternDuration;
    int _muteState;
    unsigned char _previousAction;
}

@property (readonly) double patternDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool isMuted;

- (id)init;
- (void)dealloc;
- (_Bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)startAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)stopAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)cancelAndReturnError:(id *)arg1;
- (void)doSetMute:(_Bool)arg1;
- (_Bool)needsResetForAction:(unsigned char)arg1;
- (_Bool)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3 error:(id *)arg4;
- (void)clearExternalResources:(id)arg1;

@end
