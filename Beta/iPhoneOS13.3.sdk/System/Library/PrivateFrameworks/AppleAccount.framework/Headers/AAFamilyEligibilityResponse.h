/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSArray, NSString;

@interface AAFamilyEligibilityResponse : AAResponse

{
    _Bool _hasPendingInvites;
    NSArray *_familyFeaturePrimaryDescriptions;
    NSArray *_familyFeatureSecondaryDescriptions;
    NSString *_familyFeatureSecondaryTitle;
    NSString *_underageEligibilityAlertTitle;
    NSString *_underageEligibilityAlertMessage;
}

@property (nonatomic, readonly) _Bool eligible;
@property (nonatomic, readonly) long long eligibilityStatus;
@property (nonatomic, readonly) _Bool hasPendingInvites;
@property (nonatomic, readonly) NSArray *familyFeaturePrimaryDescriptions;
@property (nonatomic, readonly) NSArray *familyFeatureSecondaryDescriptions;
@property (nonatomic, readonly) NSString *familyFeatureSecondaryTitle;
@property (nonatomic, readonly) NSString *underageEligibilityAlertTitle;
@property (nonatomic, readonly) NSString *underageEligibilityAlertMessage;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
