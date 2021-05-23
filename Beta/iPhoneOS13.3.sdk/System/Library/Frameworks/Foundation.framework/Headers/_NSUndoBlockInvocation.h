/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSUndoObject.h>

__attribute__((visibility("hidden")))
@interface _NSUndoBlockInvocation : _NSUndoObject

{
    CDUnknownBlockType _handler;
}

- (void)dealloc;
- (void)invoke;
- (id)initWithTarget:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
