/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class HIDManager, NSArray, NSMutableArray;

@protocol AXSSMotionTrackingHIDManagerDelegate, OS_dispatch_queue;

@interface AXSSMotionTrackingHIDManager : NSObject

{
    _Bool __monitoring;
    id <AXSSMotionTrackingHIDManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *__hidManagerDispatchQueue;
    HIDManager *__hidManager;
    NSMutableArray *__devices;
}

@property (nonatomic) _Bool _monitoring;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_hidManagerDispatchQueue;
@property (retain, nonatomic) HIDManager *_hidManager;
@property (retain, nonatomic) NSMutableArray *_devices;
@property (copy, nonatomic, readonly) NSArray *devices;
@property (weak, nonatomic) id <AXSSMotionTrackingHIDManagerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)_deviceNotification:(id)arg1 added:(_Bool)arg2;

@end
