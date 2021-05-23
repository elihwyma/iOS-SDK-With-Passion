/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMGestureManager : NSObject

{
    id _internal;
}

@property (copy) CDUnknownBlockType gestureHandler;

+ (void)setGestureServiceEnabled:(_Bool)arg1;
+ (_Bool)isGestureServiceEnabled;
+ (_Bool)isGestureServiceAvailable;

- (id)init;
- (void)dealloc;
- (id)initWithPriority:(int)arg1;

@end
