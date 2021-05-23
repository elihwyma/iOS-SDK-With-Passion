/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventHintNotDisplayed : TPSAnalyticsEvent

{
    NSString *_contentID;
    NSString *_bundleID;
    NSString *_context;
    NSString *_displayType;
    NSString *_reason;
}

@property (copy, nonatomic, readonly) NSString *contentID;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *context;
@property (copy, nonatomic, readonly) NSString *displayType;
@property (copy, nonatomic, readonly) NSString *reason;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (void)setDataProvider:(id)arg1;
- (id)analyticsEventRepresentation;
- (id)initWithReason:(id)arg1 lastOfferedContentID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(id)arg4 reason:(id)arg5 date:(id)arg6;
- (id)duetEvent;
- (id)initWithReason:(id)arg1 lastOfferedContentID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4 date:(id)arg5;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 reason:(long long)arg3 context:(id)arg4 date:(id)arg5;
- (id)initWithContentID:(id)arg1 reason:(long long)arg2 context:(id)arg3;

@end
