/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSProxy.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface WKObject : NSProxy

{
    _Bool _hasInitializedTarget;
    NSObject *_target;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (_Bool)isNSDate__;
- (_Bool)isNSString__;
- (_Bool)isNSCFConstantString__;
- (_Bool)isNSNumber__;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (Class)classForCoder;
- (_Bool)isNSArray__;
- (_Bool)isNSDictionary__;
- (_Bool)isNSData__;
- (_Bool)isNSObject__;
- (_Bool)isNSOrderedSet__;
- (_Bool)isNSSet__;
- (_Bool)isNSTimeZone__;
- (_Bool)isNSValue__;
- (Class)classForKeyedArchiver;
- (id)_web_createTarget;

@end
