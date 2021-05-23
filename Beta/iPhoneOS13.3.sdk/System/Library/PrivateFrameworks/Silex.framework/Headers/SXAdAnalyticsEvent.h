/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAnalyticsEvent.h>

@class NSString;

@interface SXAdAnalyticsEvent : SXAnalyticsEvent

{
    NSString *_adCampaign;
    NSString *_adLine;
    NSString *_adCreative;
    NSString *_impressionIdentifier;
    double _impressionThreshold;
}

@property (nonatomic, readonly) NSString *adCampaign;
@property (nonatomic, readonly) NSString *adLine;
@property (nonatomic, readonly) NSString *adCreative;
@property (nonatomic, readonly) NSString *impressionIdentifier;
@property (nonatomic, readonly) double impressionThreshold;

- (id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5;

@end
