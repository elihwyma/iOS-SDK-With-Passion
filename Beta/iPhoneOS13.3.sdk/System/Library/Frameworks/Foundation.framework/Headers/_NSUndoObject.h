/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSUndoObject : NSObject

{
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)init;
- (void)invoke;
- (id)target;
- (_Bool)isEndMark;
- (_Bool)isBeginMark;
- (id)initWithTarget:(id)arg1;

@end
