/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAPaymentSummaryResponse : AAResponse

{
    NSDictionary *_responseParameters;
}

@property (nonatomic, readonly) unsigned long long numberOfCards;
@property (nonatomic, readonly) NSString *description;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
