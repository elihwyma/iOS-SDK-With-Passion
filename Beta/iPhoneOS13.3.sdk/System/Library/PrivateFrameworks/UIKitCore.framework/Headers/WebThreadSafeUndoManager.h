/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSUndoManager.h>

__attribute__((visibility("hidden")))
@interface WebThreadSafeUndoManager : NSUndoManager

- (void)undo;
- (void)redo;
- (_Bool)_alwaysShowEditAlertView;

@end
