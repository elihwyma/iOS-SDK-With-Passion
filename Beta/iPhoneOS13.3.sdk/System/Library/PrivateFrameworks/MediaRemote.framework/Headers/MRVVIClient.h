/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRVVIClient : NSObject

{
    NSMutableDictionary *_deviceIDToCallbackMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedClient;

- (id)init;
- (void)dealloc;
- (void)setRecordingStateCallback:(CDUnknownBlockType)arg1 forDeviceID:(unsigned int)arg2;
- (void)_recordingStateChangedNotification:(id)arg1;

@end
