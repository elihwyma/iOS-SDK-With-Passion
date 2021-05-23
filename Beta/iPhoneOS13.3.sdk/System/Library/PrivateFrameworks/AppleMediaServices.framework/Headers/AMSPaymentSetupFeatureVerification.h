/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AMSPaymentSetupFeatureVerification : NSObject

{
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)arg1;
- (id)performPaymentSetupFeatureLookup;
- (_Bool)isPaymentSetupFeatureSupportedWithError:(id *)arg1;

@end
