/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface PXPersonFaceTileImageCombinerContext : NSObject

{
    _Bool _isLTR;
    double _displayScale;
    double _imageSize;
    double _imageOffset;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    double _borderWidth;
}

@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) _Bool isLTR;
@property (nonatomic, readonly) double imageSize;
@property (nonatomic, readonly) double imageOffset;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) double borderWidth;

- (id)initWithDisplayScale:(double)arg1 isLTR:(_Bool)arg2 imageSize:(double)arg3 imageOffset:(double)arg4 backgroundColor:(id)arg5 borderColor:(id)arg6 borderWidth:(double)arg7;

@end
