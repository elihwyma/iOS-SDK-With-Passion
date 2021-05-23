/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXLayoutEngineDataSourceSnapshot;

@interface PXLayoutSnapshot : NSObject

{
    id <PXLayoutEngineDataSourceSnapshot> _dataSourceSnapshot;
    struct CGRect _contentRect;
}

@property (retain, nonatomic) id <PXLayoutEngineDataSourceSnapshot> dataSourceSnapshot;
@property (nonatomic, readonly) struct CGRect contentRect;

- (id)init;
- (id)description;
- (id)initWithContentRect:(struct CGRect)arg1;
- (struct _PXLayoutGeometry)geometryForItem:(id)arg1;
- (void)enumerateGeometriesForItemsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
