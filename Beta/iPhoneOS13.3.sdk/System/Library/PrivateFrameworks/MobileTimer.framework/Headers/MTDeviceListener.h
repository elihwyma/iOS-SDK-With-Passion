/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NAScheduler;

@interface MTDeviceListener : NSObject

{
    _Bool _internalHasBeenUnlockedSinceBoot;
    id <NAScheduler> _workScheduler;
}

@property (retain, nonatomic) id <NAScheduler> workScheduler;
@property (nonatomic) _Bool internalHasBeenUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasBeenUnlockedSinceBoot;
+ (id)sharedDeviceListener;
+ (_Bool)_latestKeyBagValueForHasBeenUnlockedSinceBoot;

- (id)init;
- (_Bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (_Bool)_hasBeenUnlockedSinceBoot;

@end
