/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@interface CoreSpotlightUtils : NSObject

+ (void)initialize;
+ (_Bool)fastUserActivites;
+ (_Bool)detailedLoggingEnabled;
+ (_Bool)disabledUserActivities;
+ (_Bool)forceDataMigration;

@end
