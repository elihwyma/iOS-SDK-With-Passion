/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXDeviceMonitor, AXEventProcessor, NSArray, NSString;

@protocol AXMouseEventListenerDelegate;

@interface AXMouseEventListener : NSObject

{
    AXDeviceMonitor *_deviceMonitor;
    AXEventProcessor *_eventProcessor;
    NSArray *_cachedMouseDevices;
    id <AXMouseEventListenerDelegate> _delegate;
}

@property (weak, nonatomic) id <AXMouseEventListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_mouseMatching;

- (id)init;
- (void)dealloc;
- (void)deviceMonitorDidDetectDeviceEvent:(id)arg1;
- (void)beginFilteringEvents;
- (void)endFilteringEvents;
- (void)_handleMouseButtonEvent:(id)arg1;
- (id)discoveredMouseDevices;

@end
