/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class PHMemory;

@interface PXDebugMemoryGeneratorsViewControllerCell : UITableViewCell

{
    PHMemory *_memory;
}

@property (retain) PHMemory *memory;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)persist:(id)arg1;

@end
