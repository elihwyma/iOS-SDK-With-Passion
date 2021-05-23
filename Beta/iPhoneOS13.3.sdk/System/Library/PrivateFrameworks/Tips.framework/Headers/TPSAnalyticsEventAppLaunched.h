/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSNumber, NSString;

@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent

{
    _Bool _landingPage;
    NSString *_contentID;
    NSString *_collectionID;
    NSNumber *_launchNumber;
    NSString *_userType;
    NSString *_launchType;
}

@property (nonatomic, readonly) _Bool landingPage;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (nonatomic, readonly) NSNumber *launchNumber;
@property (nonatomic, readonly) NSString *userType;
@property (retain, nonatomic) NSString *launchType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 collectionID:(id)arg2 launchType:(id)arg3;

@end
