/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIScrollView.h>

#import <SafariServices/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIStackView, UIView, _SFQuickLookDocumentInfoView;

@protocol _SFQuickLookDocumentViewDelegate;

@interface _SFQuickLookDocumentView : UIScrollView <Swift>

{
    UIView *_wrapperView;
    UIView *_contentView;
    _SFQuickLookDocumentInfoView *_documentInfoView;
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    NSLayoutConstraint *_documentInfoViewBottomAnchorConstraint;
    id <_SFQuickLookDocumentViewDelegate> _quickLookDocumentViewDelegate;
}

@property (weak, nonatomic) id <_SFQuickLookDocumentViewDelegate> quickLookDocumentViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_actionButtonTapped:(id)arg1;
- (void)updateDocumentIcon:(id)arg1;
- (void)updateDocumentFileName:(id)arg1;
- (void)updateDocumentFileType:(id)arg1;
- (void)updateDocumentFileSize:(id)arg1;
- (void)updateActionTitles:(id)arg1;
- (struct CGRect)frameForButtonAtIndex:(unsigned long long)arg1;
- (void)_setUpLayoutConstraints;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (void)_configureOrientationBasedConstraints:(long long)arg1;

@end
