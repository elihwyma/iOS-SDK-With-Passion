/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel, AVWeakReference, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVFigCommChannelUUIDCommunicationChannelManager : NSObject

{
    AVFigRoutingContextOutputContextImpl *_parentOutputContextImpl;
    struct OpaqueFigRoutingContext *_routingContext;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    struct __CFString *_outgoingCommChannelUUID;
    struct __CFDictionary *_communicationChannelsForUUIDs;
    AVWeakReference *_weakObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak) AVFigRoutingContextOutputContextImpl *parentOutputContextImpl;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;

- (id)init;
- (void)dealloc;
- (id)openCommunicationChannelWithOptions:(id)arg1 error:(id *)arg2;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg1;
- (void)_didReceiveData:(struct __CFData *)arg1 fromCommChannelUUID:(struct __CFString *)arg2;
- (void)didCloseCommChannelUUID:(struct __CFString *)arg1;

@end
