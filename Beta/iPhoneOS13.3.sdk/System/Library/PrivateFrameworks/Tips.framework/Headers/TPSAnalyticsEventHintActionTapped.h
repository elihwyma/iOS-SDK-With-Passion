/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventHintActionTapped : TPSAnalyticsEvent

{
    NSString *_contentID;
    NSString *_bundleID;
    NSString *_context;
}

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (void)setDataProvider:(id)arg1;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3;

@end
