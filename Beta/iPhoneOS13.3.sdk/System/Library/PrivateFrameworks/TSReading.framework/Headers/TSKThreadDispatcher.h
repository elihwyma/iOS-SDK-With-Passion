/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKThreadDispatcher : NSObject

+ (id)sharedInstance;

- (void)dispatch:(CDUnknownBlockType)arg1;
- (id)p_dispatchQueue;
- (void)dispatchSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;

@end
