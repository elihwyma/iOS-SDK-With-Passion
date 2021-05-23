/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

__attribute__((visibility("hidden")))
@interface MRSendVirtualTouchEventMessage : MRProtocolMessage

@property (nonatomic, readonly) struct _MRHIDTouchEvent event;
@property (nonatomic, readonly) unsigned long long virtualDeviceID;

- (unsigned long long)type;
- (unsigned long long)priority;
- (id)initWithTouchEvent:(struct _MRHIDTouchEvent)arg1 virtualDeviceID:(unsigned long long)arg2;

@end
