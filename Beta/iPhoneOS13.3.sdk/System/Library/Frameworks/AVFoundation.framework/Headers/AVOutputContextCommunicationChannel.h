/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputContextCommunicationChannelInternal;

@protocol AVOutputContextCommunicationChannelImpl;

@interface AVOutputContextCommunicationChannel : NSObject

{
    AVOutputContextCommunicationChannelInternal *_ivars;
}

@property (nonatomic, readonly) const struct __CFString *commChannelUUID;
@property (nonatomic, readonly) id <AVOutputContextCommunicationChannelImpl> impl;

- (id)init;
- (void)dealloc;
- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithOutputContextCommunicationChannelImpl:(id)arg1;

@end
