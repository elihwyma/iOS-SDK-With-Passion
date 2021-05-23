/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface VSFileRemoveOperation : VSAsyncOperation

{
    NSURL *_fileURL;
    NSError *_error;
}

@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSURL *fileURL;

- (void)executionDidBegin;

@end
