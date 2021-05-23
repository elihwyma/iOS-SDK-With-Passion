/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIImage.h>

@interface UIImage (MessageUI)

+ (id)mf_systemImageNamed:(id)arg1 forView:(long long)arg2;
+ (id)mf_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;
+ (id)mf_imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)mf_symbolConfigurationForView:(long long)arg1;
+ (id)mf_assistantBarSystemImageNamed:(id)arg1;
+ (id)mf_largeContentSizeImageNamed:(id)arg1;
+ (id)mf_symbolImageCapAtContentSizeCategoryForView:(long long)arg1;
+ (id)mf_symbolImageFontTextStyleForView:(long long)arg1;
+ (long long)mf_symbolImageScaleForView:(long long)arg1;
+ (long long)mf_symbolImageWeightForView:(long long)arg1;
+ (long long)mf_imageSymbolTypeForView:(long long)arg1;
+ (unsigned int)mf_symbolicTraitsForView:(long long)arg1;
+ (id)_mf_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 imageSymbolType:(long long)arg5 traits:(unsigned int)arg6 maximumContentSizeCategory:(id)arg7;
+ (id)mf_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3 weight:(long long)arg4;
+ (id)_mf_symbolConfigurationForImageSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 traits:(unsigned int)arg5 maximumContentSizeCategory:(id)arg6;
+ (id)_mf_symbolConfigurationForView:(long long)arg1 imageSymbolType:(long long)arg2;
+ (id)mf_imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
+ (id)mf_cardIconImageFromImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
+ (double)mf_scaledImageLayoutValue:(double)arg1 forView:(long long)arg2;

@end
