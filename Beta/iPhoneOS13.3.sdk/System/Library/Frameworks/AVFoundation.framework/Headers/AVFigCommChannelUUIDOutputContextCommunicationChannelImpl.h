/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputContextCommunicationChannel, NSString;

__attribute__((visibility("hidden")))
@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject

{
    AVOutputContextCommunicationChannel *_parentChannel;
    struct OpaqueFigRoutingContext *_routingContext;
    struct __CFString *_commChannelUUID;
}

@property (nonatomic, readonly) struct __CFString *commChannelUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak) AVOutputContextCommunicationChannel *parentCommunicationChannel;

- (id)init;
- (void)dealloc;
- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg1 commChannelUUID:(struct __CFString *)arg2;

@end
