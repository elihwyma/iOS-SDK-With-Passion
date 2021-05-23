/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VUIPerfMetricsAppLaunchController : NSObject

{
    NSDictionary *_appLaunchData;
}

@property (copy, nonatomic) NSDictionary *appLaunchData;

+ (id)sharedInstance;

- (id)init;
- (void)_setAppLaunchFieldWithData:(id)arg1;
- (void)recordAppLaunchEventWithEventType:(id)arg1;

@end
