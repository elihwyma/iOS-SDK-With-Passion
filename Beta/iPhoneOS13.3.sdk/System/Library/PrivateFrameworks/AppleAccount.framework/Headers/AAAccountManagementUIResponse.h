/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AAAccountManagementUIResponse : AAResponse

{
    NSData *_responseData;
}

@property (nonatomic, readonly) NSData *responseData;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
