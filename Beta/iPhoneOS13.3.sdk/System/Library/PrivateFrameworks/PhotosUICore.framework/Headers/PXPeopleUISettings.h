/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXPeopleUISettings : PXSettings

{
    _Bool _alwaysShowBootstrap;
    _Bool _alwaysShowCandidateWidget;
    _Bool _alwaysShowMe;
    _Bool _displayBootstrapSuggestionType;
    _Bool _displayConfirmAdditionalSuggestionType;
    _Bool _displayConfirmationPhotoDate;
    _Bool _debugBlurredCells;
    _Bool _showContactSuggestions;
    _Bool _showMaybeContact;
}

@property (nonatomic, getter=shouldAlwaysShowBootstrap) _Bool alwaysShowBootstrap;
@property (nonatomic, getter=shouldAlwaysShowCandidateWidget) _Bool alwaysShowCandidateWidget;
@property (nonatomic, getter=shouldAlwaysShowMe) _Bool alwaysShowMe;
@property (nonatomic, getter=shouldDisplayBootstrapSuggestionType) _Bool displayBootstrapSuggestionType;
@property (nonatomic, getter=shouldDisplayConfirmAdditionalSuggestionType) _Bool displayConfirmAdditionalSuggestionType;
@property (nonatomic, getter=shouldDisplayConfirmationPhotoDate) _Bool displayConfirmationPhotoDate;
@property (nonatomic, getter=shouldDebugBlurredCells) _Bool debugBlurredCells;
@property (nonatomic, getter=shouldShowContactSuggestions) _Bool showContactSuggestions;
@property (nonatomic, getter=shouldShowMaybeContact) _Bool showMaybeContact;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
