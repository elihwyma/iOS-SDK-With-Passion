/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMMachineReadableCodeLoggingController : NSObject

{
    _Bool __seenMachineReadableObjectOfAcceptableSize;
    _Bool __seenMachineReadableObjectOfUnacceptableSize;
    _Bool __seenMachineReadableObjectInNonActiveState;
}

@property (nonatomic, setter=_setSeenMachineReadableObjectOfAcceptableSize:) _Bool _seenMachineReadableObjectOfAcceptableSize;
@property (nonatomic, setter=_setSeenMachineReadableObjectOfUnacceptableSize:) _Bool _seenMachineReadableObjectOfUnacceptableSize;
@property (nonatomic, setter=_setSeenMachineReadableObjectInNonActiveState:) _Bool _seenMachineReadableObjectInNonActiveState;

- (id)init;
- (void)resetLoggingState;
- (void)logMachineReadableCodeResultDuringInactiveAppState;
- (void)logMachineReadableCodeResult:(id)arg1 isOfSignificantSize:(_Bool)arg2;

@end
