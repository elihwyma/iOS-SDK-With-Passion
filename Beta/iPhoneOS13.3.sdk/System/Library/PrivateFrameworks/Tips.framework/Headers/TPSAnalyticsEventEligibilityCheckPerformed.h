/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventEligibilityCheckPerformed : TPSAnalyticsEvent

{
    NSString *_error;
}

@property (retain, nonatomic) NSString *error;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithError:(id)arg1;
- (id)analyticsEventRepresentation;

@end
