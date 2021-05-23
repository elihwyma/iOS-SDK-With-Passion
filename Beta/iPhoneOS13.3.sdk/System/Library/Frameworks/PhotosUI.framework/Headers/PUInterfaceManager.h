/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUInterfaceManager : NSObject

+ (id)currentTheme;
+ (_Bool)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;
+ (id)beginDisablingUserInteractionForReason:(long long)arg1;
+ (id)beginDisablingUserInteractionForReason:(long long)arg1 withExpectedTimeout:(double)arg2;
+ (void)endDisablingUserInteraction:(id)arg1;
+ (void)_disabledUserInteractionRequestDidTimeOut:(id)arg1;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+ (void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+ (void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+ (void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSwitchingSource;
+ (void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+ (void)_handleInteractionDisablingTimeoutForBurningInTrim;
+ (void)_handleInteractionDisablingTimeout;
+ (_Bool)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)arg1;
+ (void)beginUsingOrbTheme;
+ (void)endUsingOrbTheme;

@end
