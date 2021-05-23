/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, _MKRightImageButton;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoSuggestAnEditRowView : MKPlaceSectionRowView

{
    _MKRightImageButton *_suggestAnEditButton;
    NSLayoutConstraint *_topToTitleVerticalConstraint;
    NSLayoutConstraint *_titleToBottomVerticalConstraint;
    CDUnknownBlockType _selectionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType selectionBlock;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateConstraints;
- (void)_contentSizeDidChange;
- (void)_updateFonts;
- (void)_setupSubviews;
- (void)_suggestAnEditButtonPressed;

@end
