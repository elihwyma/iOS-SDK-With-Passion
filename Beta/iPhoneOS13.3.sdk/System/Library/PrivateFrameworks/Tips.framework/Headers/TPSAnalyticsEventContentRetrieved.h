/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentRetrieved : TPSAnalyticsEvent

{
    NSString *_contentID;
    NSString *_bundleID;
    NSString *_context;
    NSString *_serviceError;
}

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *serviceError;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (void)setDataProvider:(id)arg1;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 serviceError:(id)arg4;
- (id)initWithContentID:(id)arg1 serviceError:(id)arg2;

@end
