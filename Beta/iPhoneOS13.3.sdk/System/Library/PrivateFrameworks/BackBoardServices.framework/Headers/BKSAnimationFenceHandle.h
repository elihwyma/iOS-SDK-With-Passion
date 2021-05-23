/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceHandle : NSObject

{
    unsigned long long _fenceName;
    BSMachPortSendRight *_caFence;
    BSMachPortSendRight *_preFence;
    BSMachPortSendRight *_preFenceTrigger;
    unsigned long long _handleName;
    int _valid;
    _Bool _shouldTrace;
}

@property (copy, nonatomic, readonly) NSString *_trace;
@property (nonatomic, readonly) BSMachPortSendRight *trigger;
@property (nonatomic, readonly) unsigned long long fenceName;
@property (nonatomic, readonly, getter=isUsable) _Bool usable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)newSystemFenceHandle;
+ (id)newFenceHandleForContext:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)CAPort;
- (id)_initWithFenceName:(unsigned long long)arg1 fence:(id)arg2 preFence:(id)arg3 preFenceTrigger:(id)arg4 shouldTrace:(_Bool)arg5;

@end
