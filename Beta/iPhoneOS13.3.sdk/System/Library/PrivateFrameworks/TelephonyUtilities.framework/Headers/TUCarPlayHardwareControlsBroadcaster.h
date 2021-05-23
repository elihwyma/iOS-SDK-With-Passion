/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TUCarPlayHardwareControlsBroadcaster : NSObject

{
    struct __IOHIDEventSystemClient *_hidEventSystemClientRef;
    NSString *_eventTypeToIgnore;
}

@property (retain) NSString *eventTypeToIgnore;

- (id)init;
- (void)dealloc;
- (void)longPressTimerFired:(id)arg1;

@end
