/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@interface IPARectArray : NSObject

{
    struct RectArray *_imp;
}

+ (id)rectArray;
+ (id)rectArrayWithRect:(struct CGRect)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (id)initWithRect:(struct CGRect)arg1;
- (struct CGRect)rectAtIndex:(unsigned long long)arg1;
- (id)initWithRectArray:(id)arg1;
- (void)enumerateRects:(CDUnknownBlockType)arg1;

@end
