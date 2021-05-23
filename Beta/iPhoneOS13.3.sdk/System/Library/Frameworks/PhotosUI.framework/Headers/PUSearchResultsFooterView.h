/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PUSearchResultsIndexingProgressView, UIButton, UILabel;

@protocol PUSearchResultsFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchResultsFooterView : UIView

{
    id <PUSearchResultsFooterViewDelegate> _delegate;
    UILabel *_noResultsLabel;
    PUSearchResultsIndexingProgressView *_indexingProgressView;
    UILabel *_descriptionLabel;
    UIButton *_tapToRadarButton;
    NSLayoutConstraint *_indexingViewToNoResultsConstraint;
    NSLayoutConstraint *_indexingViewToSelfConstraint;
    NSLayoutConstraint *_fileRadarToIndexViewConstraint;
    NSLayoutConstraint *_fileRadarToNoResultsConstraint;
    NSLayoutConstraint *_fileRadarToSelfConstraint;
}

@property (retain, nonatomic) UILabel *noResultsLabel;
@property (retain, nonatomic) PUSearchResultsIndexingProgressView *indexingProgressView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *tapToRadarButton;
@property (retain, nonatomic) NSLayoutConstraint *indexingViewToNoResultsConstraint;
@property (retain, nonatomic) NSLayoutConstraint *indexingViewToSelfConstraint;
@property (retain, nonatomic) NSLayoutConstraint *fileRadarToIndexViewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *fileRadarToNoResultsConstraint;
@property (retain, nonatomic) NSLayoutConstraint *fileRadarToSelfConstraint;
@property (weak, nonatomic) id <PUSearchResultsFooterViewDelegate> delegate;
@property (nonatomic, getter=isIndexingViewHidden) _Bool indexingViewHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_preferredCalloutFont;
+ (id)_preferredBoldLabelFont;

- (id)init;
- (struct CGSize)minimumSize;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)showNoResultsContentForString:(id)arg1 suggestionsVisible:(_Bool)arg2;
- (void)hideNoResultsContent;
- (_Bool)isNoResultsContentHidden;
- (void)_didSelectTapToRadarButton:(id)arg1;
- (void)_updateTapRadarConstraints;

@end
