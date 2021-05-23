/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSViewModel.h>

@class NSURL, VSMessageQueue;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationViewModel : VSViewModel

{
    NSURL *_sourceURL;
    VSMessageQueue *_messagesToWeb;
    VSMessageQueue *_messagesFromWeb;
}

@property (copy, nonatomic) NSURL *sourceURL;
@property (nonatomic, readonly) VSMessageQueue *messagesToWeb;
@property (nonatomic, readonly) VSMessageQueue *messagesFromWeb;

- (id)init;

@end
