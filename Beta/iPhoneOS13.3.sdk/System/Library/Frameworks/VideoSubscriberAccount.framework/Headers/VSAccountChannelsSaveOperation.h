/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, VSAccountChannels, VSAccountChannelsCenter;

@interface VSAccountChannelsSaveOperation : VSAsyncOperation

{
    NSError *_error;
    VSAccountChannels *_unsavedAccountChannels;
    VSAccountChannelsCenter *_accountChannelsCenter;
}

@property (retain, nonatomic) VSAccountChannels *unsavedAccountChannels;
@property (retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter;
@property (copy, nonatomic) NSError *error;

- (id)init;
- (void)executionDidBegin;
- (id)initWithUnsavedAccountChannels:(id)arg1 accountChannelsCenter:(id)arg2;

@end
