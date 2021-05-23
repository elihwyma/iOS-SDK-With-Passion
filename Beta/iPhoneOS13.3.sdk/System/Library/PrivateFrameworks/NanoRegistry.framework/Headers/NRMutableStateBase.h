/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol NRMutableStateParentDelegate;

@interface NRMutableStateBase : NSObject

{
    NSMutableSet *_observers;
    struct os_unfair_lock_s _lock;
    id <NRMutableStateParentDelegate> _parentDelegate;
}

@property (weak, nonatomic) id <NRMutableStateParentDelegate> parentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)enclosedClassTypes;
+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)classTypes;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)observers;
- (id)applyDiff:(id)arg1;
- (id)addObserverQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)applyDiff:(id)arg1 upOnly:(_Bool)arg2 notifyParent:(_Bool)arg3 unconditional:(_Bool)arg4;
- (void)notifyParentWithDiff:(id)arg1;
- (void)notifyObserversWithDiff:(id)arg1;

@end
