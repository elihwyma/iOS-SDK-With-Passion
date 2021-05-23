/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent

{
    _Bool _alreadyRunning;
    NSString *_reason;
}

@property (retain, nonatomic) NSString *reason;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initWithReason:(id)arg1 alreadyRunning:(_Bool)arg2;

@end
