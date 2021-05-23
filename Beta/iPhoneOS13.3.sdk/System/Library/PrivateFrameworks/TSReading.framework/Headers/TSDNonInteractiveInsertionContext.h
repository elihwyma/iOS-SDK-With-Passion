/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDInsertionContext.h>

@interface TSDNonInteractiveInsertionContext : TSDInsertionContext

- (_Bool)isInteractive;
- (_Bool)hasPreferredCenter;
- (_Bool)isPreferredCenterRequired;
- (struct CGPoint)preferredCenter;
- (_Bool)shouldEndEditing;
- (_Bool)insertFloating;
- (_Bool)insertFromDrag;
- (_Bool)fromDragToInsertController;
- (_Bool)insertWillBeDiscarded;

@end
