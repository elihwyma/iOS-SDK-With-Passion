/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSRecursiveLock;

@interface AXEventTapManager : NSObject

{
    NSMutableArray *_eventTaps;
    NSMutableArray *_addedEventTapPairs;
    NSMutableSet *_removedEventTapIdentifiers;
    _Bool _isEnumeratingEventTaps;
    _Bool _shouldReorderEventTaps;
    CDUnknownBlockType _installationGSCallback;
    CDUnknownBlockType _installationHIDCallback;
    NSRecursiveLock *_eventTapLock;
    struct __IOHIDEventSystemClient *_ioSystemPostBackClient;
    CDUnknownBlockType _installationEventRepPost;
}

@property (copy, nonatomic) CDUnknownBlockType installationGSCallback;
@property (copy, nonatomic) CDUnknownBlockType installationHIDCallback;
@property (copy, nonatomic) CDUnknownBlockType installationEventRepPost;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_enumerateEventTapPairsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_reorderEventTaps;
- (void)_setGSEventTapCallback:(void *)arg1;
- (void)_setHIDEventTapCallback:(void *)arg1;
- (void)sendHIDSystemEvent:(id)arg1 repostCreatorHIDEvent:(_Bool)arg2 senderID:(unsigned long long)arg3;
- (id)_copyCurrentEventTapPairs;
- (void)_setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)_installHIDFilter:(id)arg1 skipDeviceMatching:(_Bool)arg2 wantsDigitizerEvents:(_Bool)arg3 wantsKeyboardEvents:(_Bool)arg4 wantsATVRemoteEvents:(_Bool)arg5 wantsLisaEvents:(_Bool)arg6 wantsMouseEvents:(_Bool)arg7;
- (void)_installSystemEventTap:(id)arg1;
- (id)installEventTap:(CDUnknownBlockType)arg1 identifier:(id)arg2 type:(int)arg3 skipDeviceMatching:(_Bool)arg4 wantsDigitizerEvents:(_Bool)arg5 wantsKeyboardEvents:(_Bool)arg6 wantsATVRemoteEvents:(_Bool)arg7 wantsLisaEvents:(_Bool)arg8 wantsMouseEvents:(_Bool)arg9;
- (id)installEventTap:(CDUnknownBlockType)arg1 identifier:(id)arg2 type:(int)arg3 skipDeviceMatching:(_Bool)arg4 wantsDigitizerEvents:(_Bool)arg5 wantsKeyboardEvents:(_Bool)arg6 wantsATVRemoteEvents:(_Bool)arg7 wantsLisaEvents:(_Bool)arg8 wantsMouseEvents:(_Bool)arg9 matchingServiceHandler:(CDUnknownBlockType)arg10;
- (void)_installEventTap:(id)arg1 skipDeviceMatching:(_Bool)arg2 wantsDigitizerEvents:(_Bool)arg3 wantsKeyboardEvents:(_Bool)arg4 wantsATVRemoteEvents:(_Bool)arg5 wantsLisaEvents:(_Bool)arg6 wantsMouseEvents:(_Bool)arg7;
- (void)_removeHIDEventTapFilter:(id)arg1;
- (void)_runMatchingServiceHandler:(id)arg1;
- (void)sendHIDSystemEvent:(id)arg1 senderID:(unsigned long long)arg2;
- (void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(_Bool)arg3 namedTaps:(id)arg4 options:(unsigned long long)arg5;
- (void)_handleTestIOHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_processHIDEvent:(struct __IOHIDEvent *)arg1 taskPort:(unsigned int)arg2 bundleId:(id)arg3;
- (_Bool)_processGSEvent:(CDStruct_64a21a73 *)arg1;
- (void)setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)_passivelyPeakAtHIDEventWithTarget:(void *)arg1 tapPair:(id)arg2 sender:(void *)arg3 event:(struct __IOHIDEvent *)arg4 axEventRep:(id)arg5 didHandle:(_Bool)arg6;
- (id)installEventTap:(CDUnknownBlockType)arg1 identifier:(id)arg2 type:(int)arg3;
- (id)installKeyboardEventTap:(CDUnknownBlockType)arg1 identifier:(id)arg2 matchingServiceHandler:(CDUnknownBlockType)arg3;
- (void)removeEventTap:(id)arg1;
- (void)runMatchingServiceHandlerForEventTap:(id)arg1;

@end
