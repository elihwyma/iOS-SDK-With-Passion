/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface OBAnalyticsManager : NSObject

{
    _Bool _shouldStashMetrics;
    NSMutableArray *_stagedMetrics;
}

@property (retain) NSMutableArray *stagedMetrics;
@property _Bool shouldStashMetrics;

+ (id)sharedManager;

- (id)init;
- (void)commit;
- (void)logPresentationOfPrivacyUnifiedAbout;
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1;
- (void)stageMetricID:(unsigned int)arg1 metric:(id)arg2;
- (void)postMetricID:(unsigned int)arg1 metric:(id)arg2;
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)arg1;

@end
