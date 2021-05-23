/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSFinanceAuthenticateResponse, AMSPaymentSheetRequest, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinancePaymentSheetResponse : NSObject

{
    AMSPaymentSheetRequest *_paymentSheetRequest;
    AMSFinanceAuthenticateResponse *_authenticateResponse;
}

@property (nonatomic, readonly) AMSPaymentSheetRequest *paymentSheetRequest;
@property (nonatomic, readonly) AMSFinanceAuthenticateResponse *authenticateResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_createRequestFromDictionary:(id)arg1 confirmationOnly:(_Bool)arg2 authenticateResponse:(id)arg3 taskInfo:(id)arg4;
+ (long long)_payeeForRequestorValue:(id)arg1;
+ (long long)_payeeInferredFromEnumeratedTitle:(id)arg1;
+ (long long)_salableIconForString:(id)arg1;
+ (long long)_confirmationTitleForString:(id)arg1;
+ (id)_attributedStringForSalableInfoStringArray:(id)arg1 account:(id)arg2 shouldUppercase:(_Bool)arg3;
+ (id)_attributedStringForStringArray:(id)arg1 useGrey:(_Bool)arg2 account:(id)arg3 shouldUppercase:(_Bool)arg4;
+ (id)_greyAttributedStringForAttributedString:(id)arg1 range:(struct _NSRange)arg2;

- (id)performWithTaskInfo:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1 confirmationOnly:(_Bool)arg2 taskInfo:(id)arg3;

@end
