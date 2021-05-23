/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSProxy <Swift>

{
    Class isa;
}

@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (_Bool)isProxy;
+ (id)alloc;
+ (id)init;
+ (unsigned long long)retainCount;
+ (void)dealloc;
+ (_Bool)isEqual:(id)arg1;
+ (Class)class;
+ (id)self;
+ (id)performSelector:(SEL)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (_Bool)isKindOfClass:(Class)arg1;
+ (_Bool)isMemberOfClass:(Class)arg1;
+ (_Bool)conformsToProtocol:(id)arg1;
+ (_Bool)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (oneway void)release;
+ (id)autorelease;
+ (struct _NSZone *)zone;
+ (unsigned long long)hash;
+ (Class)superclass;
+ (id)description;
+ (id)debugDescription;
+ (_Bool)retainWeakReference;
+ (_Bool)allowsWeakReference;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)_tryRetain;
+ (_Bool)_isDeallocating;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)mutableCopyWithZone:(struct _NSZone *)arg1;
+ (id)copy;
+ (_Bool)isSubclassOfClass:(Class)arg1;
+ (_Bool)isAncestorOfObject:(id)arg1;
+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (_Bool)isFault;
+ (CDUnknownFunctionPointerType)instanceMethodForSelector:(SEL)arg1;
+ (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (id)mutableCopy;
+ (void)finalize;
+ (id)_copyDescription;

- (_Bool)isNSDate__;
- (_Bool)isProxy;
- (unsigned long long)retainCount;
- (_Bool)isNSString__;
- (_Bool)isNSCFConstantString__;
- (_Bool)isNSNumber__;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (Class)class;
- (id)self;
- (id)performSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (struct _NSZone *)zone;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (_Bool)isFault;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)finalize;
- (id)_copyDescription;
- (_Bool)isNSArray__;
- (_Bool)isNSDictionary__;
- (_Bool)isNSData__;
- (_Bool)isNSObject__;
- (_Bool)isNSOrderedSet__;
- (_Bool)isNSSet__;
- (_Bool)isNSTimeZone__;
- (_Bool)isNSValue__;
- (_Bool)_allowsDirectEncoding;

@end
