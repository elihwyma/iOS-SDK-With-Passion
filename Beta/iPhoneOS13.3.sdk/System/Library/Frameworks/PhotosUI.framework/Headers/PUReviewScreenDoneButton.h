/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIButton.h>

@interface PUReviewScreenDoneButton : UIButton

{
    _Bool __needsUpdate;
    unsigned long long _preferredStyle;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic) _Bool _needsUpdate;
@property (nonatomic) unsigned long long preferredStyle;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;

+ (id)doneButton;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_updateIfNeeded;

@end
