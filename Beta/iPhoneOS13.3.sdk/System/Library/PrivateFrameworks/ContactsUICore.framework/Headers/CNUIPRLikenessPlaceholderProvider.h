/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNCache, NSString;

@interface CNUIPRLikenessPlaceholderProvider : NSObject

{
    CNCache *_cache;
}

@property (nonatomic, readonly) CNCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)imageNameForDiameter:(double)arg1;
+ (id)companyImageNameForDiameter:(double)arg1;

- (id)init;
- (id)_cnui_likenessForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_circularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)renderCircularImageForSilhouetteImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (struct CGImage *)renderRoundedRectImageForSilhouetteImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (unsigned long long)_cnui_likenessType;

@end
