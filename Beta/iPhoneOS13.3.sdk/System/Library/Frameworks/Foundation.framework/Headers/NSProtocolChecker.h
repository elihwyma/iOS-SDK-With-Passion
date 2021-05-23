/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSProxy.h>

@class NSObject, Protocol;

@interface NSProtocolChecker : NSProxy

@property (readonly) Protocol *protocol;
@property (retain, readonly) NSObject *target;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2;

- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct objc_method_description *)methodDescriptionForSelector:(SEL)arg1;
- (const char *)_localClassNameForClass;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;

@end
