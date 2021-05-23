/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNumberFilter.h>

@interface PXChangeDirectionNumberFilter : PXNumberFilter

{
    double _threshold;
    double _minimumChange;
}

@property (nonatomic) double minimumChange;

- (id)initWithInput:(double)arg1;
- (double)updatedOutput;
- (double)initialOutputForInput:(double)arg1;

@end
