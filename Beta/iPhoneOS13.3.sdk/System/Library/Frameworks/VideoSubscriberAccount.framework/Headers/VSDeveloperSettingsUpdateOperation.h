/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSDeveloperServiceConnection, VSDeveloperSettings, VSOptional;

@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation

{
    VSDeveloperSettings *_settings;
    VSOptional *_result;
    VSDeveloperServiceConnection *_connection;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSDeveloperServiceConnection *connection;
@property (copy, nonatomic) VSDeveloperSettings *settings;

- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)executionDidBegin;

@end
