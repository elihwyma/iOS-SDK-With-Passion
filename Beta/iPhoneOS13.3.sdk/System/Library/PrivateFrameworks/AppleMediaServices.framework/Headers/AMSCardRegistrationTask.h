/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface AMSCardRegistrationTask : AMSTask

{
    NSString *_countryCode;
    NSString *_merchantIdentifier;
}

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *merchantIdentifier;

- (id)_performCardRegistration;
- (id)initWithCountryCode:(id)arg1 merchantIdentifier:(id)arg2;
- (id)performCardRegistration;

@end
