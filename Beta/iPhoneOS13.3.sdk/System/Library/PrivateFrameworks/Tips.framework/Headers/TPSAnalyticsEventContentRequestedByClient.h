/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentRequestedByClient : TPSAnalyticsEvent

{
    NSString *_bundleID;
    NSString *_context;
}

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithBundleID:(id)arg1 context:(id)arg2;
- (id)analyticsEventRepresentation;

@end
