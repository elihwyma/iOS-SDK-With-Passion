/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSUndoObject.h>

__attribute__((visibility("hidden")))
@interface _NSUndoLightInvocation : _NSUndoObject

{
    SEL _selector;
    id _arg;
}

- (void)dealloc;
- (id)description;
- (void)invoke;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)_argument;

@end
