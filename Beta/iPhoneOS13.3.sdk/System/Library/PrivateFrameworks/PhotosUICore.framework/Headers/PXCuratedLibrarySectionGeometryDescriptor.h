/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXDisplayAsset;

@interface PXCuratedLibrarySectionGeometryDescriptor : NSObject

{
    id <PXDisplayAsset> _headerAsset;
    long long _visualPosition;
    CDStruct_2bd92d94 _headerCornerRadius;
    struct CGRect _sectionRect;
    struct CGRect _keyAssetRect;
    struct CGRect _headerRect;
}

@property (nonatomic, readonly) struct CGRect sectionRect;
@property (nonatomic, readonly) struct CGRect keyAssetRect;
@property (nonatomic, readonly) struct CGRect headerRect;
@property (nonatomic, readonly) CDStruct_2bd92d94 headerCornerRadius;
@property (nonatomic, readonly) id <PXDisplayAsset> headerAsset;
@property (nonatomic, readonly) long long visualPosition;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSectionRect:(struct CGRect)arg1 headerRect:(struct CGRect)arg2 keyAssetRect:(struct CGRect)arg3 headerCornerRadius:(CDStruct_2bd92d94)arg4 headerAsset:(id)arg5;
- (id)initWithSectionRect:(struct CGRect)arg1 headerRect:(struct CGRect)arg2 keyAssetRect:(struct CGRect)arg3 headerCornerRadius:(CDStruct_2bd92d94)arg4 headerAsset:(id)arg5 visualPosition:(long long)arg6;
- (id)sectionGeometryDescriptorWithVisualPosition:(long long)arg1;
- (id)sectionGeometryDescriptorOffsetBy:(struct CGPoint)arg1;
- (id)sectionGeometryDescriptorTransformedBy:(struct CGAffineTransform)arg1;
- (id)sectionGeometryDescriptorWithMaximumHeightBelowHeader:(double)arg1;
- (id)sectionGeometryDescriptorWithHeaderRect:(struct CGRect)arg1;
- (struct CGRect)resizeRect:(struct CGRect)arg1 fromGeometryDesciptor:(id)arg2 inContainer:(long long)arg3 resizing:(unsigned long long)arg4;
- (CDStruct_2bd92d94)cornerRadiusForRect:(struct CGRect)arg1;

@end
