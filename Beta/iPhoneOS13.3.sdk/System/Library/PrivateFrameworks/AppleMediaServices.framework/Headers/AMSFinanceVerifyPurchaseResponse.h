/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSFinanceDialogResponse.h>

@class AMSURLTaskInfo, NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSFinanceVerifyPurchaseResponse : AMSFinanceDialogResponse

{
    NSDictionary *_responseDictionary;
    AMSURLTaskInfo *_taskInfo;
    long long _verifyType;
}

@property (retain, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (nonatomic) long long verifyType;

+ (_Bool)isVerifyPurchasePayload:(id)arg1;
+ (long long)_verifyTypeFromPayload:(id)arg1;
+ (id)_dialogRequestForCVVFromPayload:(id)arg1 verifyType:(long long)arg2;
+ (id)_dialogRequestForCarrierFromPayload:(id)arg1 verifyType:(long long)arg2;

- (id)performWithTaskInfo:(id)arg1;
- (id)_handleCVVDialogResult:(id)arg1 shouldReattempt:(_Bool *)arg2;
- (id)_handleCarrierDialogResult:(id)arg1 shouldReattempt:(_Bool *)arg2;
- (id)_runCarrierNewCodeWithError:(id *)arg1;
- (id)_runCarrierVerifyCode:(id)arg1 error:(id *)arg2;
- (id)_runCVVRequestForCode:(id)arg1 error:(id *)arg2;
- (id)initWithPayload:(id)arg1 taskInfo:(id)arg2;

@end
