/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAnalyticsEvent.h>

@class NSError, NSString, SXADBannerView;

@interface SXAdOpportunityEvent : SXAnalyticsEvent

{
    _Bool _expanded;
    _Bool _shown;
    int _opportunityError;
    NSString *_opportunityIdentifier;
    double _positionInArticle;
    NSString *_componentIdentifier;
    NSError *_error;
    SXADBannerView *_bannerView;
}

@property (retain, nonatomic) NSString *opportunityIdentifier;
@property (nonatomic) double positionInArticle;
@property (retain, nonatomic) NSString *componentIdentifier;
@property (nonatomic) int opportunityError;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SXADBannerView *bannerView;
@property (nonatomic) _Bool expanded;
@property (nonatomic) _Bool shown;

- (id)description;

@end
