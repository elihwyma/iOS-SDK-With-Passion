/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVRunLoopCondition, AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetReaderOutputInternal : NSObject

{
    AVWeakReference *weakReference;
    _Bool alwaysCopiesSampleData;
    _Bool supportsRandomAccess;
    NSArray *currentTimeRanges;
    AVWeakReference *weakReferenceToAssetReader;
    struct OpaqueFigAssetReader *figAssetReader;
    int extractionID;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    _Bool currentConfigurationIsFinal;
    _Bool extractionCompleteForCurrentConfiguration;
    int finished;
    _Bool maximizePowerEfficiency;
}

@end
