/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSLayoutConstraint, NSString, PHPerson, PXOneUpPresentation, PXPeopleSuggestionDataSource, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIButton, UILabel, UIView;

@protocol PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXPeopleCandidateWidget : NSObject <Swift>

{
    _Bool _dismissed;
    PXPhotosDetailsContext *_context;
    PXWidgetSpec *_spec;
    id <PXWidgetDelegate> _widgetDelegate;
    PXPeopleSuggestionDataSource *_dataSource;
    UIView *_contentView;
    UILabel *_label;
    PHPerson *_person;
    UIButton *_notNowButton;
    NSLayoutConstraint *_avatarToLeadingConstraint;
    NSLayoutConstraint *_notNowToTrailingConstraint;
}

@property (retain, nonatomic) PXPeopleSuggestionDataSource *dataSource;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) PHPerson *person;
@property (nonatomic) _Bool dismissed;
@property (weak, nonatomic) UIButton *notNowButton;
@property (retain, nonatomic) NSLayoutConstraint *avatarToLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *notNowToTrailingConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic, readonly) _Bool hasContentForCurrentInput;
@property (nonatomic, readonly) _Bool hasLoadedContentData;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;

- (void)setContentSize:(struct CGSize)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)controllerTraitCollectionDidChangeFrom:(id)arg1 to:(id)arg2;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)loadContentData;
- (void)unloadContentData;
- (void)_suggestionsDidFinish:(id)arg1;
- (void)updateNotNowButton;
- (void)reviewTapped:(id)arg1;
- (void)notNowTapped:(id)arg1;
- (void)_dismissWithAnimation:(_Bool)arg1;
- (void)_updateAndSetDescriptionFont;

@end
