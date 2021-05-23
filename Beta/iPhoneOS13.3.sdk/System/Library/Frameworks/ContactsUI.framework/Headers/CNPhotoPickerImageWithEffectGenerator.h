/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhotoPickerImageWithEffectGenerator : NSObject

+ (id)coreImageFilterNames;
+ (id)coreImageFilterDisplayNames;
+ (id)displayNameForFilterNamed:(id)arg1;
+ (void)imagesByApplyingEffectsToImageData:(id)arg1 withScaleFactor:(double)arg2 originalImageScale:(double)arg3 cropRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)imageByApplyingEffect:(id)arg1 withContext:(id)arg2 toImageData:(id)arg3;
+ (id)imageByApplyingEffect:(id)arg1 withContext:(id)arg2 toImage:(id)arg3 withSize:(struct CGSize)arg4;

@end
