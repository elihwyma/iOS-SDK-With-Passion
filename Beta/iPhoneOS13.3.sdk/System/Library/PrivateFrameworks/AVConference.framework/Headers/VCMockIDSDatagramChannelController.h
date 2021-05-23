/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class VCMockIDSDatagramChannel;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannelController

{
    VCMockIDSDatagramChannel *_datagramChannel;
}

+ (id)sharedInstance;

- (void)invalidate;
- (id)datagramChannelRequiresOptions:(_Bool)arg1;
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;

@end
