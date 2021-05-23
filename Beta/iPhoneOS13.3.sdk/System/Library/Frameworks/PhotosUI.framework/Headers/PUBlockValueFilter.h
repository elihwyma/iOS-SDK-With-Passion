/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUValueFilter.h>

@interface PUBlockValueFilter : PUValueFilter

{
    CDUnknownBlockType _operationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType operationBlock;

- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
