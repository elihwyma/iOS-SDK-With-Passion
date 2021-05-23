/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSIndexSet, NSString, PXLayoutMetrics;

@interface PXLayoutGenerator : NSObject <Swift>

{
    PXLayoutMetrics *_metrics;
    unsigned long long _itemCount;
    unsigned long long _keyItemIndex;
    CDUnknownBlockType _itemLayoutInfoBlock;
}

@property (nonatomic, readonly) struct _PXCornerSpriteIndexes cornerSpriteIndexes;
@property (copy, nonatomic) PXLayoutMetrics *metrics;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long keyItemIndex;
@property (copy, nonatomic) CDUnknownBlockType itemLayoutInfoBlock;
@property (nonatomic, readonly) struct CGSize estimatedSize;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) NSIndexSet *geometryKinds;
@property (nonatomic, readonly) NSString *diagnosticDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (id)initWithMetrics:(id)arg1;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;

@end
