/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEIKEv2TimerResponder : NSObject

+ (id)sharedTimerResponder;

- (void)ikeTimerFired:(id)arg1;
- (void)childTimerFired:(id)arg1;

@end
