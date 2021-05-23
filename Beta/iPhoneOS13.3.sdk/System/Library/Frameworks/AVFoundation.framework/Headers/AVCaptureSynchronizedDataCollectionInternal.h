/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureOutput, AVCaptureSynchronizedData, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureSynchronizedDataCollectionInternal : NSObject

{
    AVCaptureOutput *dataOutputs[4];
    AVCaptureSynchronizedData *synchronizedData[4];
    BOOL count;
    unsigned long long changeSeed;
    CDStruct_1b6d18a9 creationTime;
    NSArray *possibleDataOutputs;
}

@end
