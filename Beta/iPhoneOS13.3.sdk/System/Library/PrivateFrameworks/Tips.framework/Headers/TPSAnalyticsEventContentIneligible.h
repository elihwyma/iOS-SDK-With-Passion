/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentIneligible : TPSAnalyticsEvent

{
    NSString *_contentID;
    NSString *_bundleID;
    NSString *_context;
    unsigned long long _displayType;
    long long _reason;
}

@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, readonly) long long reason;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 reason:(long long)arg5 date:(id)arg6;
- (id)duetEvent;

@end
