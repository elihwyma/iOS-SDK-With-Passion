/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <NSObject.h>

@interface NUViewGeometry : NSObject

{
    _Bool _flipped;
    double _backingScale;
    double _angle;
    double _maximumScale;
    struct CGSize _imageSize;
    struct CGPoint _origin;
    struct UIEdgeInsets _contentInsets;
    struct CGRect _cropRect;
}

@property (nonatomic) double backingScale;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic, readonly) struct CGSize viewImageSize;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic, getter=isFlipped) _Bool flipped;
@property (nonatomic) double angle;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic) struct CGPoint origin;
@property (nonatomic) double maximumScale;
@property (nonatomic, readonly) struct CGRect imageBounds;
@property (nonatomic, readonly) struct CGRect boundingCropRect;

- (id)init;
- (struct CGRect)proposedBoundsForBounds:(struct CGRect)arg1 inFrame:(struct CGRect)arg2;
- (struct CGRect)insetBoundsForCrop:(struct CGRect)arg1 inBounds:(struct CGRect)arg2 inFrame:(struct CGRect)arg3;
- (struct UIEdgeInsets)contentInsetsWithScale:(double)arg1;

@end
