/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSUndoObject.h>

__attribute__((visibility("hidden")))
@interface _NSUndoBeginMark : _NSUndoObject

{
    id _groupIdentifier;
    _Bool _isDiscardable;
}

- (void)dealloc;
- (id)description;
- (_Bool)isBeginMark;
- (_Bool)isDiscardable;
- (id)groupIdentifier;
- (void)setGroupIdentifier:(id)arg1;
- (void)setDiscardable:(_Bool)arg1;

@end
