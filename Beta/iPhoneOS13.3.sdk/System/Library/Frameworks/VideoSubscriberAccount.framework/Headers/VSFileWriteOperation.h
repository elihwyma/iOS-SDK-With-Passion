/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, VSOptional;

@interface VSFileWriteOperation : VSAsyncOperation

{
    VSOptional *_data;
    VSOptional *_destination;
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSOptional *data;
@property (retain, nonatomic) VSOptional *destination;

- (id)init;
- (void)executionDidBegin;

@end
