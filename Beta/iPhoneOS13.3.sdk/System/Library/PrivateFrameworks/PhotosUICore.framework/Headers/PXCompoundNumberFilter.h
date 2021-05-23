/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNumberFilter.h>

@class NSArray;

@interface PXCompoundNumberFilter : PXNumberFilter

{
    NSArray *_filters;
}

@property (copy, nonatomic) NSArray *filters;

- (double)updatedOutput;

@end
