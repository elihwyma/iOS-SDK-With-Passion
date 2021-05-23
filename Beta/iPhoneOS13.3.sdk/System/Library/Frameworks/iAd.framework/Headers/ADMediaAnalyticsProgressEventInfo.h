/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <iAd/ADMediaAnalyticsEventInfo.h>

@interface ADMediaAnalyticsProgressEventInfo : ADMediaAnalyticsEventInfo

{
    long long _progressMilestone;
}

@property (nonatomic) long long progressMilestone;

- (id)initWithProgressEventMilestone:(long long)arg1;

@end
