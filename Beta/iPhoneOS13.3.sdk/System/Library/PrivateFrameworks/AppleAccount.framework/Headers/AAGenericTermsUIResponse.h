/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSData, NSDictionary, NSString;

@interface AAGenericTermsUIResponse : AAResponse

{
    NSDictionary *_responseTermsDictionary;
    NSString *_responseAgreeURL;
    NSData *_responseData;
}

@property (nonatomic, readonly) NSData *responseData;
@property (nonatomic, readonly) NSString *agreeURL;
@property (nonatomic, readonly) NSDictionary *termsDictionary;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
