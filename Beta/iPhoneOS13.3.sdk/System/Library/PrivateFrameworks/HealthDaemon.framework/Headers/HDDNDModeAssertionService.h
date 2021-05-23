/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDDNDModeAssertionService : NSObject

- (void)requestQuietModeOverrideAssertion;
- (void)invalidateAssertion;

@end
