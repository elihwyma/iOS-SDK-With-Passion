/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@protocol PUEditingExtensionUndoTarget <Swift>

- (unsigned short)performUndo;
- (unsigned short)performRedo;

@end
