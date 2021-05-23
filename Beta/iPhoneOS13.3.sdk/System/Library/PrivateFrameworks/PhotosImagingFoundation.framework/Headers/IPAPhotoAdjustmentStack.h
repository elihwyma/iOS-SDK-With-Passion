/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAAdjustmentStack.h>

@class IPAPhotoAdjustmentPipeline;

@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack

{
    long long _orientation;
    IPAPhotoAdjustmentPipeline *_pipeline;
    struct PFIntSize_st _inputSize;
}

@property (nonatomic) struct PFIntSize_st inputSize;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) IPAPhotoAdjustmentPipeline *pipeline;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)maskUUIDs;
- (id)minimumVersionForFormat:(id)arg1;
- (id)_debugDescriptionSuffix;

@end
