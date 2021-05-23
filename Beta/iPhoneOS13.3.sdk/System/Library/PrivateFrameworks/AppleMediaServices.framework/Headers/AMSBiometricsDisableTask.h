/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount;

@interface AMSBiometricsDisableTask : AMSTask

{
    ACAccount *_account;
}

@property (nonatomic, readonly) ACAccount *account;

- (id)initWithAccount:(id)arg1;
- (id)perform;

@end
