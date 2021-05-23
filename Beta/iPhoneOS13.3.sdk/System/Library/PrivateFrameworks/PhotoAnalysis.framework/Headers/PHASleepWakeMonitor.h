/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@interface PHASleepWakeMonitor : NSObject

{
    unsigned int _powerAssertionID;
}

@property unsigned int powerAssertionID;

+ (_Bool)isSystemInDarkWake;

- (void)takeUserIdlePowerAssertion;
- (void)releaseUserIdlePowerAssertion;

@end
