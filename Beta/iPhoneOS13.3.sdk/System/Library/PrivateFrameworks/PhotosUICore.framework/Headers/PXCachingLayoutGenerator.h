/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCachingLayoutGenerator : PXLayoutGenerator

{
    _Bool _isValid;
    struct CGSize _contentSize;
    struct CGRect *_itemRects;
    long long *_itemKinds;
    long long _itemCapacity;
}

- (void)dealloc;
- (void)invalidate;
- (struct CGSize)size;
- (void)_updateIfNeeded;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)updateContentSize:(out struct CGSize *)arg1 itemRects:(out struct CGRect *)arg2;
- (void)updateContentSize:(out struct CGSize *)arg1 itemRects:(out struct CGRect *)arg2 itemKinds:(out long long *)arg3;

@end
