/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVWeakReference, NSError, NSMutableArray, NSMutableSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetReaderInternal : NSObject

{
    AVWeakReference *weakReference;
    AVAsset *asset;
    struct OpaqueFigAssetReader *figAssetReader;
    CDStruct_e83c9415 timeRange;
    _Bool readSingleSample;
    NSMutableArray *outputs;
    NSMutableSet *outputFinishedCallbackInvokers;
    long long status;
    NSError *error;
    NSError *errorThatOccurredBeforeStartReading;
    NSObject<OS_dispatch_queue> *statusReadWriteQueue;
}

@end
