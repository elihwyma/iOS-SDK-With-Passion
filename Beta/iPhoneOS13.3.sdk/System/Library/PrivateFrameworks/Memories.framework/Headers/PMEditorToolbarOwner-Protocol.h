/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@protocol PMEditorToolbarOwner <Swift>

@property (nonatomic, readonly) double toolbarHeight;

- (unsigned short)hideToolbarIfNeeded;
- (unsigned short)showToolbar;
- (unsigned short)pausePlayer;

@end
