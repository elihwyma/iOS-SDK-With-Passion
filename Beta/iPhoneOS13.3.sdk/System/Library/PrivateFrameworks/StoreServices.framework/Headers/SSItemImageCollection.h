/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray;

@interface SSItemImageCollection : NSObject

{
    NSArray *_itemImages;
}

@property (nonatomic, readonly) NSArray *itemImages;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)bestImageForSize:(struct CGSize)arg1;
- (id)imagesForKind:(id)arg1;
- (id)initWithImageCollection:(id)arg1;
- (id)initWithItemImages:(id)arg1;
- (id)_newImagesForDictionary:(id)arg1;
- (id)imagesForSize:(struct CGSize)arg1;
- (id)_imagesForSize:(struct CGSize)arg1 scale:(double)arg2;

@end
