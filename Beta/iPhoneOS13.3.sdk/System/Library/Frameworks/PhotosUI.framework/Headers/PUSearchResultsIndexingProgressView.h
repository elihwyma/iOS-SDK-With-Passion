/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface PUSearchResultsIndexingProgressView : UIView

{
    UILabel *_indexingLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) UILabel *indexingLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)contentSizeCategoryChanged;

@end
