/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSUndoObject.h>

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface _NSUndoInvocation : _NSUndoObject

{
    NSInvocation *_invocation;
}

- (void)dealloc;
- (id)description;
- (void)invoke;
- (id)initWithTarget:(id)arg1 invocation:(id)arg2;

@end
