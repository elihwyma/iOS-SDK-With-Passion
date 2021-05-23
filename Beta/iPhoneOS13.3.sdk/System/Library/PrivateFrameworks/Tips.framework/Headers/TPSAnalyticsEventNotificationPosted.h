/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSNumber, NSString;

@interface TPSAnalyticsEventNotificationPosted : TPSAnalyticsEvent

{
    NSNumber *_posted;
    NSNumber *_countdown;
    _Bool _landingPage;
    NSString *_contentID;
    NSString *_collectionID;
    NSNumber *_welcomeNumber;
    NSString *_errorCode;
}

@property (nonatomic, readonly) _Bool landingPage;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (nonatomic, readonly) NSNumber *notificationsPosted;
@property (nonatomic, readonly) NSNumber *countdownToSoftOptout;
@property (retain, nonatomic) NSNumber *welcomeNumber;
@property (retain, nonatomic) NSString *errorCode;

+ (_Bool)supportsSecureCoding;
+ (void)resetCountdownToSoftOptout;
+ (void)decrementCountdownToSoftOptout;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 collectionID:(id)arg2 welcomeNumber:(id)arg3 errorCode:(id)arg4;

@end
