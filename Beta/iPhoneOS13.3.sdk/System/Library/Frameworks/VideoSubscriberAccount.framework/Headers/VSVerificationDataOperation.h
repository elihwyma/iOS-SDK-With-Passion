/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class AKAnisetteProvisioningController, VSOptional;

@interface VSVerificationDataOperation : VSAsyncOperation

{
    VSOptional *_result;
    AKAnisetteProvisioningController *_provisioningController;
}

@property (retain) VSOptional *result;
@property (retain, nonatomic) AKAnisetteProvisioningController *provisioningController;

- (id)init;
- (void)_finishWithError:(id)arg1;
- (void)_finishWithData:(id)arg1;
- (void)executionDidBegin;
- (void)_finishWithResult:(int)arg1 bytes:(char *)arg2 length:(unsigned int)arg3;

@end
