/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@interface DAAggDReporter : NSObject

+ (void)reportActiveExchangeOAuthAccountsCount;
+ (void)startDailyAggDReporter;
+ (void)endDailyAggDReporter;

@end
