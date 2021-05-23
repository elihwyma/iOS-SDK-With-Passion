/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class _NSUndoObject;

__attribute__((visibility("hidden")))
@interface _NSUndoStack : NSObject

{
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (id)topUndoObject;
- (void)setMax:(unsigned long long)arg1;
- (unsigned long long)nestingLevel;
- (void)markBegin;
- (_Bool)isDiscardable;
- (id)popUndoObject;
- (void)markEnd;
- (unsigned long long)max;
- (id)groupIdentifier;
- (void)setGroupIdentifier:(id)arg1;
- (void)setDiscardable:(_Bool)arg1;
- (_Bool)popAndInvoke;
- (void)removeAllObjectsWithTarget:(id)arg1;
- (void)push:(id)arg1;
- (void)_removeBottom;
- (id)_beginMark;

@end
