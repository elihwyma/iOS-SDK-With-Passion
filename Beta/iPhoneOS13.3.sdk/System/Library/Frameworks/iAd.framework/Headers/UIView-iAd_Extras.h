/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIView.h>

@interface UIView (iAd_Extras)

- (struct CGRect)_iAd_screenFrame;
- (void)_iAd_removeConstraintsReferencingView:(id)arg1 constrainedView:(id)arg2;
- (_Bool)_iAd_isVisiblePercentageThreshold:(long long)arg1;
- (float)_iAd_visiblePercentage;
- (_Bool)_iAd_isVisible:(CDUnknownBlockType)arg1;
- (_Bool)_iAd_isVisibleFast;
- (_Bool)_iAd_isFeldsparClientVisibleFast;
- (_Bool)_iAd_isFeldsparClientVisibleFastInSize:(struct CGSize)arg1;

@end
