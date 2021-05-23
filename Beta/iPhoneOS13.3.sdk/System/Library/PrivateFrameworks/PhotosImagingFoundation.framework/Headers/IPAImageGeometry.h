/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

#import <PhotosImagingFoundation/Swift-Protocol.h>

@class NSString;

@interface IPAImageGeometry : NSObject <Swift>

{
    NSString *_identifier;
    struct CGRect _extent;
    struct CGRect _domain;
    struct Quad2d _imageQuad;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)clearScene:(id)arg1;
+ (void)addRect:(struct CGRect)arg1 withLabel:(id)arg2 toScene:(id)arg3;
+ (void)addQuadV0:(struct CGPoint)arg1 V1:(struct CGPoint)arg2 V2:(struct CGPoint)arg3 V3:(struct CGPoint)arg4 withLabel:(id)arg5 toScene:(id)arg6;
+ (void)addPoint:(struct CGPoint)arg1 radius:(double)arg2 withLabel:(id)arg3 toScene:(id)arg4;
+ (void)addLineFromP0:(struct CGPoint)arg1 P1:(struct CGPoint)arg2 withLabel:(id)arg3 toScene:(id)arg4;
+ (id)inputGeometryWithImageSize:(struct CGSize)arg1;

- (id)init;
- (struct CGRect)domain;
- (id)identifier;
- (id).cxx_construct;
- (struct CGRect)extent;
- (struct Quad2d)imageQuad;
- (id)initWithIdentifier:(id)arg1 extent:(struct CGRect)arg2 imageQuad:(const struct Quad2d *)arg3;
- (id)initWithIdentifier:(id)arg1 extent:(struct CGRect)arg2 domain:(struct CGRect)arg3;
- (id)initWithIdentifier:(id)arg1 extent:(struct CGRect)arg2;

@end
