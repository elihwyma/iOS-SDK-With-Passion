/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSOptional;

__attribute__((visibility("hidden")))
@interface VSFileReadOperation : VSAsyncOperation

{
    NSURL *_source;
    VSOptional *_result;
}

@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) NSURL *source;

- (id)init;
- (void)executionDidBegin;

@end
