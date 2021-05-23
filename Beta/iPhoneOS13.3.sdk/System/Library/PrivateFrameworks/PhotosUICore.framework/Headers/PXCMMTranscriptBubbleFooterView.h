/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface PXCMMTranscriptBubbleFooterView : UIView

{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_chevronImageView;
}

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) _Bool chevronIsHidden;

+ (double)desiredHeight;
+ (double)_primaryToSecondaryBaselineSpacing;
+ (double)_topToPrimaryBaselineSpacing;
+ (double)_secondaryBaselineToBottomSpacing;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
