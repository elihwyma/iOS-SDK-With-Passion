/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDInsertionContext.h>

@interface TSDDragInsertionContext : TSDInsertionContext

{
    struct CGPoint mPreferredCenter;
    _Bool mPreferredCenterRequired;
    _Bool mShouldEndEditing;
    _Bool mFromDragToInsertController;
    _Bool mInsertWillBeDiscarded;
}

- (id)init;
- (_Bool)isInteractive;
- (id)initWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 shouldEndEditing:(_Bool)arg3 fromDragToInsertController:(_Bool)arg4 insertWillBeDiscarded:(_Bool)arg5;
- (_Bool)hasPreferredCenter;
- (_Bool)isPreferredCenterRequired;
- (struct CGPoint)preferredCenter;
- (_Bool)shouldEndEditing;
- (_Bool)insertFloating;
- (_Bool)insertFromDrag;
- (_Bool)fromDragToInsertController;
- (_Bool)insertWillBeDiscarded;

@end
