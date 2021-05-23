/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSObject (FMAdditions)

@property (retain, nonatomic, readonly) NSString *fm_logID;
@property (retain, nonatomic, readonly) NSString *logID;

- (void)_fm_addNotificationObserverProxy:(id)arg1;
- (void)_fm_removeNotificationObserverProxy:(id)arg1;
- (id)fm_associatedObjectForDescriptor:(const CDStruct_b9c9288f *)arg1;
- (void)fm_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const CDStruct_b9c9288f *)arg2;
- (id)fm_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)fm_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)fm_removeNotificationBlockObserver:(id)arg1;
- (id)fm_nullToNil;
- (id)nullToNil;

@end
