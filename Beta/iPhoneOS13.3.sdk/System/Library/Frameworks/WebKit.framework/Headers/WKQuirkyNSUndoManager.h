/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSUndoManager.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKQuirkyNSUndoManager : NSUndoManager

{
    WKContentView *_contentView;
}

@property (weak, readonly) WKContentView *contentView;

- (_Bool)canRedo;
- (_Bool)canUndo;
- (void)undo;
- (void)redo;
- (id)initWithContentView:(id)arg1;

@end
