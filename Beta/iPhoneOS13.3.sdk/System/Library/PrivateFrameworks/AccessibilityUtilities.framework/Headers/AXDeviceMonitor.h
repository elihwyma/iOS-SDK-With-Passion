/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSRunLoop;

@protocol AXDeviceMonitorDelegate;

@interface AXDeviceMonitor : NSObject

{
    NSRunLoop *_targetRunLoop;
    struct __IOHIDManager *_hidManager;
    unsigned long long _state;
    id <AXDeviceMonitorDelegate> _delegate;
}

@property (weak, nonatomic) id <AXDeviceMonitorDelegate> delegate;

+ (id)bluetoothKeyboardDevices;

- (void)dealloc;
- (void)invalidate;
- (void)begin;
- (void)_commonInitWithRunLoop:(id)arg1;
- (id)initWithMatchingDictionary:(id)arg1 callbackRunLoop:(id)arg2;
- (id)initWithMatchingMultiple:(id)arg1 callbackRunLoop:(id)arg2;
- (id)copyDevices;
- (void)informDelegate;

@end
