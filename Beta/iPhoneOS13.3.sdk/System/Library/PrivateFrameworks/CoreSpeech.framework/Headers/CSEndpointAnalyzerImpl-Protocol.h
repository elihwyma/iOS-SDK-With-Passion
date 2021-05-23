/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/Swift-Protocol.h>

@class NSString;

@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate;

@protocol CSEndpointAnalyzerImpl <Swift>

@property (weak, nonatomic) id <CSEndpointAnalyzerDelegate> delegate;
@property (weak, nonatomic) id <CSEndpointAnalyzerImplDelegate> implDelegate;
@property (nonatomic, readonly) _Bool canProcessCurrentRequest;
@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, readonly) NSString *endpointerModelVersion;
@property (nonatomic, readonly) double elapsedTimeWithNoSpeech;

- (unsigned short)resetForNewRequestWithSampleRate:recordContext:recordSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)processAudioSamplesAsynchronously: /* Error: Ran out of types for this method. */;
- (unsigned short)stopEndpointer;
- (unsigned short)recordingStoppedForReason: /* Error: Ran out of types for this method. */;
- (unsigned short)trailingSilenceDurationAtEndpoint;

@end
