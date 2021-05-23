/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface AAAvailabilityResponse : AAResponse

{
    NSString *_status;
    NSString *_eta;
    NSString *_feature;
}

@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) NSString *eta;
@property (nonatomic, readonly) NSString *feature;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
