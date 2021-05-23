/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFWeakReferenceHolder;

@protocol MFContentProtectionObserver, OS_dispatch_queue;

@interface _MFContentProtectionObserverWrapper : NSObject

{
    MFWeakReferenceHolder *_observerReference;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) id <MFContentProtectionObserver> observer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;

@end
