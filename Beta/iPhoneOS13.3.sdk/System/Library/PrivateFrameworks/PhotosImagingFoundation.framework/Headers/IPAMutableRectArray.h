/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPARectArray.h>

@interface IPAMutableRectArray : IPARectArray

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addRect:(struct CGRect)arg1;
- (void)removeAllRects;
- (void)setRectArray:(id)arg1;
- (void)insertRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)removeRectAtIndex:(unsigned long long)arg1;

@end
