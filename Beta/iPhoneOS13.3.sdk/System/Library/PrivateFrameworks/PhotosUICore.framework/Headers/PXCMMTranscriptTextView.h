/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXUpdater, UILabel;

@interface PXCMMTranscriptTextView : UIView

{
    PXUpdater *_updater;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    NSString *_primaryText;
    NSString *_secondaryText;
}

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_performLayoutInSize:(struct CGSize)arg1 minimizingSize:(_Bool)arg2 updateSubviewFrames:(_Bool)arg3;
- (void)_updatePrimaryLabel;
- (void)_updateSecondaryLabel;

@end
