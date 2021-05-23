/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSData, NSString;

@interface AASecondaryAuthenticationResponse : AAResponse

{
    NSString *_secondFactorToken;
    NSData *_buddyML;
}

@property (nonatomic, readonly) NSString *secondFactorToken;
@property (nonatomic, readonly) NSData *buddyML;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
