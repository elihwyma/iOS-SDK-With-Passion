/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class PHMemory;

@interface PXExistingMemoriesDebugViewCell : UITableViewCell

{
    PHMemory *_memory;
}

@property (retain) PHMemory *memory;

@end
