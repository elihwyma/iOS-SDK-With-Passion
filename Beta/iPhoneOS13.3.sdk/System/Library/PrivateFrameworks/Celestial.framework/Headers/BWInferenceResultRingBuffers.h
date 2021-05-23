/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface BWInferenceResultRingBuffers : NSObject

{
    struct OpaqueFigSimpleMutex *_lock;
    NSMutableDictionary *_rings;
}

- (id)init;
- (void)dealloc;
- (void)insertInferenceResultsFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setupRingBuffer:(int)arg1 inferencesOfType:(int)arg2;
- (id)retrieveInferencesForType:(int)arg1 beginning:(CDStruct_1b6d18a9)arg2 until:(CDStruct_1b6d18a9)arg3;
- (void)bufferingStatsForType:(int)arg1 firstOut:(CDStruct_1b6d18a9 *)arg2 lastOut:(CDStruct_1b6d18a9 *)arg3 countOut:(int *)arg4;

@end
