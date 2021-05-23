/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIButton.h>

@class NSIndexPath;

@interface MiroSongPreviewButton : UIButton

{
    NSIndexPath *_indexPath;
}

@property (retain, nonatomic) NSIndexPath *indexPath;

@end
