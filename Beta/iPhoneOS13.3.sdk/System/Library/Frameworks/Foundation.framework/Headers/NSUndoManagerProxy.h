/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSProxy.h>

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface NSUndoManagerProxy : NSProxy

{
    NSUndoManager *_manager;
    Class _targetClass;
}

- (_Bool)isKindOfClass:(Class)arg1;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithManager:(id)arg1;
- (void)setTargetClass:(Class)arg1;
- (void)superRelease;

@end
