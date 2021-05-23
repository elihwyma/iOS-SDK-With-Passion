/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class SampleBufferRef;

@interface WriterReorderQ : NSObject

{
    SampleBufferRef *_q;
    CDStruct_1b6d18a9 _lastReorderedTime;
}

- (id)init;
- (id)getReorderBuffer:(id)arg1;
- (id)clearQueuedBuffer;

@end
