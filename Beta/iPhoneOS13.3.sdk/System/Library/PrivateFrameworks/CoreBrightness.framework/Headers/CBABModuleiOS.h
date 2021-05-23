/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBModule.h>

@class CBDisplayModuleiOS, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CBABModuleiOS : CBModule

{
    struct AABC *_AABC;
    CBDisplayModuleiOS *_display;
    NSMutableArray *_alsServiceClients;
    NSMutableArray *_otherServiceClients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (void)start;
- (id)copyPropertyForKey:(id)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2;

@end
