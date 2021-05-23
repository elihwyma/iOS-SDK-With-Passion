/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMDescriptionOverlayView.h>

@interface CAMCTMDescriptionOverlayView : CAMDescriptionOverlayView

- (id)_currentContentSize;
- (double)_additionalSpacingForContentSize:(id)arg1;
- (id)titleTextUsingNarrowWidth:(_Bool)arg1;
- (id)acknowledgmentTextUsingNarrowWidth:(_Bool)arg1;
- (id)descriptionTitleTextUsingNarrowWidth:(_Bool)arg1;
- (id)descriptionTextUsingNarrowWidth:(_Bool)arg1;
- (id)infoTitleTextUsingNarrowWidth:(_Bool)arg1;
- (id)infoTextUsingNarrowWidth:(_Bool)arg1;
- (double)maxDescriptionTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)maxInfoTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)additionalSpacing;

@end
