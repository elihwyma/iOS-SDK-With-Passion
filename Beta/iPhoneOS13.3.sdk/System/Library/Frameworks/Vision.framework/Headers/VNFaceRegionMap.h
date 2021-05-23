/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface VNFaceRegionMap : NSObject

{
    unsigned long long _requestRevision;
    struct vImage_Buffer _regionMap;
    struct CGRect _userBBox;
    struct _Geometry2D_rect2D_ _internalAlignedBBox;
    _Bool _deallocateBuffer;
    NSDictionary *_pixelValueToRegionLabelMap;
    NSArray *_regionLabels;
}

@property (copy) NSArray *regionLabels;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 regionMap:(struct vImage_Buffer *)arg2 deallocateBuffer:(_Bool)arg3 userBBox:(struct CGRect)arg4 alignedBBox:(struct _Geometry2D_rect2D_)arg5 valueToLabelMap:(id)arg6;
- (id)getRegionLabels;
- (id)regionNameAtNormalizedAlignedFaceCoordinate:(struct CGPoint)arg1;
- (id)regionNameAtImageCoordinate:(struct CGPoint)arg1 imageSize:(struct CGSize)arg2;
- (id)regionNameAtNormalizedFaceCoordinate:(struct CGPoint)arg1;

@end
