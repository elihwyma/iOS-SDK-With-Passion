/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIImage.h>

@interface UIImage (HKAdditions)

+ (id)hk_disclosureChevronImage;
+ (id)hk_transparentInterfaceImageWithSize:(struct CGSize)arg1;
+ (id)hk_arrowMoveImage;
+ (id)hk_arrowExerciseImage;
+ (id)hk_arrowStandImage;
+ (id)hk_hearingHealthAudioExposureSymbolForClassification:(unsigned long long)arg1 font:(id)arg2;

- (id)hk_watchIconImage;
- (double)hk_scaledImageViewHeightWithScaledWidth:(double)arg1;
- (id)hk_croppedImageWithRect:(struct CGRect)arg1;
- (id)hk_resizedImageWithSize:(struct CGSize)arg1;
- (id)hk_resizedInterfaceImageWithSize:(struct CGSize)arg1;

@end
