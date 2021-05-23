/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAUIQuotaRequest : AARequest

{
    ACAccount *_account;
    _Bool _isDetailedRequest;
}

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;
- (id)initDetailedRequestWithAccount:(id)arg1;

@end
