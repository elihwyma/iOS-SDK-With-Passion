/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSDeveloperServiceConnection, VSOptional;

@interface VSDeveloperSettingsFetchOperation : VSAsyncOperation

{
    VSOptional *_result;
    VSDeveloperServiceConnection *_connection;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSDeveloperServiceConnection *connection;

- (id)init;
- (void)executionDidBegin;

@end
