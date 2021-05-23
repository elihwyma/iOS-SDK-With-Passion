/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSNumber;

@interface TPSAnalyticsEventAppLeavesScreen : TPSAnalyticsEvent

{
    NSNumber *_previouslyUnseenTipViews;
    NSNumber *_collectionViews;
    NSNumber *_tipViewsThisSession;
}

@property (nonatomic, readonly) NSNumber *previouslyUnseenTipViewsInThisSession;
@property (nonatomic, readonly) NSNumber *collectionViews;
@property (nonatomic, readonly) NSNumber *tipViewsInThisSession;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;

@end
