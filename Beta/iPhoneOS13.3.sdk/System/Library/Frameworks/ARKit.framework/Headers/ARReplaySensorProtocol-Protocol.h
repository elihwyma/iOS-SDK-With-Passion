/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/Swift-Protocol.h>

@class NSArray, NSSet, NSString, NSURL;

@protocol ARReplaySensorDelegate, ARSensorDelegate;

@protocol ARReplaySensorProtocol <Swift>

@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (weak) id <ARReplaySensorDelegate> replaySensorDelegate;
@property (nonatomic, readonly) NSURL *sequenceURL;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *arkitVersion;
@property (nonatomic, readonly) struct CGSize imageResolution;
@property (nonatomic, readonly) double nominalFrameRate;
@property (nonatomic, readonly) unsigned long long recordedSensorTypes;
@property (nonatomic, readonly) NSSet *recordedResultClasses;
@property (nonatomic, readonly) NSArray *recordedResultClassList;
@property (nonatomic, readonly) _Bool isReplayingManually;
@property (nonatomic, readonly, getter=isSynchronousMode) _Bool synchronousMode;
@property (nonatomic, readonly) _Bool finishedReplaying;
@property (nonatomic) unsigned long long forcePlaybackFramesPerSecond;
@property (readonly) long long nextFrameIndex;
@property float advanceFramesPerSecondMultiplier;
@property (copy, nonatomic) NSSet *customDataClasses;
@property (nonatomic, readonly) _Bool interrupted;

- (unsigned short)stop;
- (unsigned short)start;
- (unsigned short)interrupt;
- (unsigned short)endInterruption;
- (unsigned short)initWithDataFromFile: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithSequenceURL:manualReplay: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithSequenceURL:manualReplay:synchronousMode: /* Error: Ran out of types for this method. */;
- (unsigned short)advanceFrame;
- (unsigned short)advanceToFrameIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)replayTechniqueForResultDataClasses: /* Error: Ran out of types for this method. */;
- (unsigned short)customDataForTimestamp: /* Error: Ran out of types for this method. */;

@end
