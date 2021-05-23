/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface PXCornerMaskCacheEntry : NSObject

{
    UIImage *_image;
    CDStruct_2bd92d94 _cornerRadius;
    struct CGSize _size;
}

@property (nonatomic, readonly) CDStruct_2bd92d94 cornerRadius;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) UIImage *image;

- (id)description;
- (id)initWithCornerRadius:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2 image:(id)arg3;

@end
