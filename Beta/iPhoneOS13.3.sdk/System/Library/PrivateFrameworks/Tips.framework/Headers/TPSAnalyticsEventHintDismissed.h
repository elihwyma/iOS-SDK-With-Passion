/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventHintDismissed : TPSAnalyticsEvent

{
    double _timeToDismissal;
    NSString *_contentID;
    NSString *_bundleID;
    NSString *_context;
    NSString *_dismissType;
}

@property (nonatomic) double timeToDismissal;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSString *dismissType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (void)setDataProvider:(id)arg1;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 dismissType:(id)arg4 timeToDismissal:(double)arg5 date:(id)arg6;

@end
