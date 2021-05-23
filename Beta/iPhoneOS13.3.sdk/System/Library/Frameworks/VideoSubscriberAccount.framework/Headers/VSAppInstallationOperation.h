/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, VSOptional;

@interface VSAppInstallationOperation : VSAsyncOperation

{
    NSString *_buyParams;
    VSOptional *_result;
}

@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) NSString *buyParams;

- (id)init;
- (void)executionDidBegin;

@end
