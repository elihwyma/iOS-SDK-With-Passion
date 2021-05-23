/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest

{
    NSString *_secondaryAuthToken;
    NSString *_heartbeatToken;
}

@property (copy, nonatomic) NSString *secondaryAuthToken;
@property (copy, nonatomic) NSString *heartbeatToken;

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (_Bool)forceGSToken;

@end
