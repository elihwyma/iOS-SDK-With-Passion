/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, AMSFinanceAuthenticateResponse, AMSFinanceDialogResponse, AMSFinancePaymentSheetResponse, AMSURLTaskInfo, NSArray, NSDictionary, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface AMSFinanceResponse : NSObject

{
    AMSFinanceDialogResponse *_dialogResponse;
    AMSFinanceAuthenticateResponse *_authenticateResponse;
    AMSFinancePaymentSheetResponse *_paymentSheetResponse;
    long long _dialogKind;
    NSDictionary *_responseDictionary;
    AMSURLTaskInfo *_taskInfo;
}

@property (nonatomic, readonly) long long dialogKind;
@property (retain, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) AMSFinanceAuthenticateResponse *authenticateResponse;
@property (nonatomic, readonly) AMSFinanceDialogResponse *dialogResponse;
@property (nonatomic, readonly) AMSFinancePaymentSheetResponse *paymentSheetResponse;
@property (nonatomic, readonly) NSArray *pingURLs;
@property (nonatomic, readonly) NSError *serverError;
@property (nonatomic, readonly) _Bool supportedProtocolVersion;
@property (nonatomic, readonly) NSURL *versionMismatchURL;

- (id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2;
- (id)_valueForProtocolKey:(id)arg1;

@end
