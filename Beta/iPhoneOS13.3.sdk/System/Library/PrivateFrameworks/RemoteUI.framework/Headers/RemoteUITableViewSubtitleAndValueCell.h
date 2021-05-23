/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UILabel;

@interface RemoteUITableViewSubtitleAndValueCell

{
    UILabel *_valueLabel;
}

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)valueLabel;
- (void)_adjustFrameOfView:(id)arg1 distance:(double)arg2;
- (id)effectiveDetailTextLabel;
- (id)effectiveValueTextLabel;

@end
