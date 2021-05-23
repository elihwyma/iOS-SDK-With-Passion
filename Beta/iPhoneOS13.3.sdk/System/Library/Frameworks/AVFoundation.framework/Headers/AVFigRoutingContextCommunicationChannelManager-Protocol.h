/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/Swift-Protocol.h>

@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel;

@protocol AVFigRoutingContextCommunicationChannelManager <Swift>

@property (weak) AVFigRoutingContextOutputContextImpl *parentOutputContextImpl;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;

- (unsigned short)openCommunicationChannelWithOptions:error: /* Error: Ran out of types for this method. */;

@end
