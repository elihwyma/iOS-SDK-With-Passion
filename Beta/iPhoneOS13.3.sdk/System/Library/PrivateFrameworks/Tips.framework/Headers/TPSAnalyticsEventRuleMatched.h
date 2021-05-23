/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventRuleMatched : TPSAnalyticsEvent

{
    NSString *_contentID;
    NSString *_ruleID;
}

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *ruleID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 ruleID:(id)arg2;

@end
