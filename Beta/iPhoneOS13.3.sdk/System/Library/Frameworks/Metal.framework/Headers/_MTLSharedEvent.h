/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <IOSurface/IOSurfaceSharedEvent.h>

@class NSString;

@protocol MTLDevice;

@interface _MTLSharedEvent : IOSurfaceSharedEvent

{
    unsigned long long _labelTraceID;
    NSString *_label;
    struct os_unfair_lock_s _labelLock;
}

@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long labelTraceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property unsigned long long signaledValue;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg1 value:(unsigned long long)arg2;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg1 value:(unsigned long long)arg2;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (id)retainedLabel;
- (id)initWithSharedEventHandle:(id)arg1;
- (id)newSharedEventHandle;

@end
