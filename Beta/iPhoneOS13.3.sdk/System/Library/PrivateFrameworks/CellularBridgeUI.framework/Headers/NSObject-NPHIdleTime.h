/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <Foundation/NSObject.h>

@interface NSObject (NPHIdleTime)

+ (void)_NPHIdleTimeNotification:(id)arg1;
+ (void)NPHRequestIdleTimeNotification;
+ (void)performBlockAtIdle:(CDUnknownBlockType)arg1;

- (void)nph_debounce:(SEL)arg1 delay:(double)arg2;

@end
