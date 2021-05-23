/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface FAChildTransferInviteView : UIView

{
    UILabel *_titleLabel;
    UILabel *_primaryLabel;
    UILabel *_detailsLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (double)desiredHeightForWidth:(double)arg1;
- (id)initWithInvite:(id)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (id)_labelWithCenteredText:(id)arg1;
- (double)_heightForTitle:(id)arg1 width:(double)arg2;

@end
