/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <Foundation/NSObject.h>

@interface MCMDMAggregateLogger : NSObject

+ (void)_incrementCountFor:(id)arg1;
+ (void)pushReceived;
+ (void)pushRejected;
+ (void)commandReceived:(id)arg1;

@end
