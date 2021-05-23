/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSLiveFSVolume : NSObject

{
    NSURL *_volumeURL;
    NSString *_volumeName;
    NSObject<OS_dispatch_queue> *_queue;
    const char *_volumeNameCString;
    unsigned long long _volumeNameCStringLength;
    NSObject<OS_xpc_object> *_delayedObject;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) const char *volumeNameCString;
@property (nonatomic, readonly) unsigned long long volumeNameCStringLength;
@property (retain, nonatomic) NSObject<OS_xpc_object> *delayedObject;
@property (nonatomic, readonly) NSURL *volumeURL;
@property (nonatomic, readonly) NSString *volumeName;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)initWithVolumeURL:(id)arg1;
- (id)initWithVolumeName:(id)arg1;
- (void)_handleDelayedEvent;
- (int)sendCSLiveFSEvent:(struct CSLiveEventInfo *)arg1;
- (void)sendEventOfType:(int)arg1 pid:(int)arg2 path:(const char *)arg3 pathLength:(unsigned long long)arg4 attributes:(id)arg5;
- (void)sendDeleteEventForPID:(int)arg1 path:(const char *)arg2 pathLength:(unsigned long long)arg3;
- (void)sendPairedEventOfType:(int)arg1 pid:(int)arg2 fromPath:(const char *)arg3 fromPathLength:(unsigned long long)arg4 fromAttributes:(id)arg5 toPath:(const char *)arg6 toPathLength:(unsigned long long)arg7 toAttributes:(id)arg8;
- (void)sendXattrModifiedEventForPID:(int)arg1 path:(const char *)arg2 pathLength:(unsigned long long)arg3 xAttrName:(id)arg4 xAttrValue:(id)arg5 attributes:(id)arg6;
- (void)sendXattrRemovedEventForPID:(int)arg1 path:(const char *)arg2 pathLength:(unsigned long long)arg3 xAttrName:(id)arg4 attributes:(id)arg5;
- (_Bool)isInterestingPath:(const char *)arg1;

@end
