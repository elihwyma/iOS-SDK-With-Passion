/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface PXMagazineRectArray : NSObject <Swift>

{
    struct PXMagazineRect *_rects;
    unsigned long long _currentIndex;
    unsigned long long _size;
    double _score;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) double score;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(unsigned long long)arg1;
- (void)addRect:(struct PXMagazineRect)arg1;
- (struct PXMagazineRect)rectAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowsUsed;
- (void)removeLastRect;

@end
