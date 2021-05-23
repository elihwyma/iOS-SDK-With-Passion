/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject

{
    AVCaptureSynchronizedDataInternal *_synchronizedDataInternal;
}

@property (readonly) CDStruct_1b6d18a9 timestamp;

- (void)dealloc;
- (id)_initWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)adjustedTimestamp;
- (void)setAdjustedTimestamp:(CDStruct_1b6d18a9)arg1;
- (_Bool)hasCorrespondingDepthData;
- (_Bool)hasCorrespondingVisionData;
- (int)constituentDeviceCaptureID;

@end
