/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <Foundation/NSObject.h>

@interface CCSUsageMetrics : NSObject

@property (nonatomic, readonly) unsigned long long userInvocationCount;

+ (id)sharedInstance;

- (void)incrementUserInvocationCount;

@end
