/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNCache, NSData, NSString;

@interface CNUIPRLikenessPhotoProvider : NSObject

{
    NSData *_originalPhotoData;
    CNCache *_cache;
}

@property (nonatomic, readonly) CNCache *cache;
@property (nonatomic, readonly) NSData *originalPhotoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGImage *)cgImageFromData:(id)arg1;

- (id)_cnui_likenessForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_circularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_image;
- (id)initWithPhotoData:(id)arg1;
- (unsigned long long)_cnui_likenessType;
- (struct CGImage *)renderCircularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)renderRoundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;

@end
