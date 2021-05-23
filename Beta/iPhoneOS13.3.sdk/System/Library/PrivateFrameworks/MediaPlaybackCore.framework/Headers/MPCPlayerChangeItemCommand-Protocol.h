/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@protocol MPCPlayerChangeItemCommand <Swift>

- (unsigned short)previousItem;
- (unsigned short)nextItem;
- (unsigned short)previousItemDeferringToPlaybackQueuePosition;
- (unsigned short)previousSection;
- (unsigned short)previousChapter;
- (unsigned short)nextSection;
- (unsigned short)nextChapter;
- (unsigned short)changeToSection: /* Error: Ran out of types for this method. */;
- (unsigned short)changeToItem: /* Error: Ran out of types for this method. */;

@end
