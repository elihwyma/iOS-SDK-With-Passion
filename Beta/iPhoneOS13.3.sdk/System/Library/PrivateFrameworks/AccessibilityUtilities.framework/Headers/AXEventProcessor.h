/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSThread;

@interface AXEventProcessor : NSObject

{
    _Bool _shouldRunHIDReceiveThreadRunloop;
    _Bool _shouldNotifyUserEventOccurred;
    _Bool _handlingHIDEvents;
    _Bool _ignoreAllSystemEvents;
    _Bool _handlingSystemEvents;
    int _HIDEventTapPriority;
    int _systemEventTapPriority;
    NSString *_HIDEventTapIdentifier;
    NSThread *_HIDEventReceiveThread;
    CDUnknownBlockType _HIDEventHandler;
    unsigned long long _HIDEventFilterMask;
    NSString *_systemEventTapIdentifier;
    CDUnknownBlockType _systemEventHandler;
    NSMutableArray *_hidActualEventTapEnabledReasons;
    NSMutableArray *_systemActualEventTapEnabledReasons;
}

@property (retain, nonatomic) NSString *HIDEventTapIdentifier;
@property (nonatomic) int HIDEventTapPriority;
@property (retain, nonatomic) NSThread *HIDEventReceiveThread;
@property (nonatomic, getter=isHandlingHIDEvents) _Bool handlingHIDEvents;
@property (retain, nonatomic) NSMutableArray *hidActualEventTapEnabledReasons;
@property (retain, nonatomic) NSString *systemEventTapIdentifier;
@property (nonatomic) int systemEventTapPriority;
@property (nonatomic, getter=isHandlingSystemEvents) _Bool handlingSystemEvents;
@property (retain, nonatomic) NSMutableArray *systemActualEventTapEnabledReasons;
@property (nonatomic) _Bool shouldNotifyUserEventOccurred;
@property (copy, nonatomic) CDUnknownBlockType HIDEventHandler;
@property (nonatomic) unsigned long long HIDEventFilterMask;
@property (nonatomic, readonly) NSArray *hidEventTapEnabledReasons;
@property (copy, nonatomic) CDUnknownBlockType systemEventHandler;
@property (nonatomic) _Bool ignoreAllSystemEvents;
@property (weak, nonatomic, readonly) NSArray *systemEventTapEnabledReasons;

- (id)init;
- (void)dealloc;
- (void)cleanup;
- (id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4;
- (void)_runHIDEventReceiveThread;
- (void)_threadStop;
- (void)_installHIDEventFilter;
- (void)_uninstallHIDEventFilter;
- (void)_installSystemEventFilter;
- (void)_uninstallSystemEventFilter;
- (void)beginHandlingHIDEventsForReason:(id)arg1;
- (void)endHandlingHIDEventsForReason:(id)arg1;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)beginHandlingSystemEventsForReason:(id)arg1;
- (void)endHandlingSystemEventsForReason:(id)arg1;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)restoreSystemEventTapPriorityToDefault;

@end
