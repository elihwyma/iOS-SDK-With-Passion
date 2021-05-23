/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventFeedRequested : TPSAnalyticsEvent

{
    _Bool _tipFeed;
    NSString *_serviceError;
    NSString *_clientError;
}

@property (retain, nonatomic) NSString *serviceError;
@property (retain, nonatomic) NSString *clientError;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initTipFeedRequestWithServiceError:(id)arg1 clientError:(id)arg2;
- (id)initRulesFeedRequestWithServiceError:(id)arg1 clientError:(id)arg2;

@end
