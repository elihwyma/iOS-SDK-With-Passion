/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBDisplayModule.h>

__attribute__((visibility("hidden")))
@interface CBDisplayModuleiOS : CBDisplayModule

{
    struct __Display *_displayInternal;
}

@property (readonly) struct __Display *displayInternal;

- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (void)start;
- (id)copyPropertyForKey:(id)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (id)initWithBacklight:(unsigned int)arg1 queue:(id)arg2 display:(id)arg3;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;

@end
