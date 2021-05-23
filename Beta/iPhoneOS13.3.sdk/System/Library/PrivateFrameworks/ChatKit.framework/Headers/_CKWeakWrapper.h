/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSProxy.h>

@class IMWeakReference;

__attribute__((visibility("hidden")))
@interface _CKWeakWrapper : NSProxy

{
    IMWeakReference *_weakReference;
    Class _targetClass;
}

@property (retain, nonatomic) IMWeakReference *weakReference;
@property (retain, nonatomic) Class targetClass;

- (_Bool)isEqual:(id)arg1;
- (Class)class;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1;

@end
