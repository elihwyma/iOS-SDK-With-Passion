/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITargetedProxy.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, _UIViewServiceFencingControlProxy;

__attribute__((visibility("hidden")))
@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <Swift>

{
    int _remotePID;
    _UIViewServiceFencingControlProxy *_fencingControlProxy;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (int)__automatic_invalidation_logic;

@end
