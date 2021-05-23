/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXCompositeEditorialLayoutTemplate : NSObject

{
    struct CGRect *_rects;
    double *_rectWeights;
    _Bool _shouldIgnoreWeights;
    long long _identifier;
    long long _numberOfRects;
    long long _numberOfColumns;
    double _tileAspectRatio;
}

@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) long long numberOfRects;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) double tileAspectRatio;

- (id)init;
- (void)dealloc;
- (id)initWithDescriptorDictionary:(id)arg1;
- (void)_initRectsStorageWithDescriptors:(id)arg1;
- (void)_enumerateRectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)getComputedRects:(out struct CGRect *)arg1 contentSize:(out struct CGSize *)arg2 forReferenceSize:(struct CGSize)arg3 interTileSpacing:(double)arg4;
- (double)costForFittingLayoutItemInputs:(id)arg1 inRange:(struct _NSRange)arg2 ofTotalItemCount:(long long)arg3 normalizedWeights:(in double *)arg4 useSaliency:(_Bool)arg5;

@end
