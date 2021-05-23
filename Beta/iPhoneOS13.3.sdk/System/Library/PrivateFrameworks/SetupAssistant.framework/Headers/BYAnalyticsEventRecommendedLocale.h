/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@interface BYAnalyticsEventRecommendedLocale : NSObject

{
    _Bool _userVisitedLocalePane;
    _Bool _userSawRecommendedLocale;
    unsigned long long _source;
    double _durationOfWiFiScan;
}

@property (nonatomic) unsigned long long source;
@property (nonatomic) double durationOfWiFiScan;
@property (nonatomic) _Bool userVisitedLocalePane;
@property (nonatomic) _Bool userSawRecommendedLocale;

+ (id)sharedInstance;

- (id)init;
- (id)eventPayload;

@end
