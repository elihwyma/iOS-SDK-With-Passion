/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class PNPPencilView, PNPSyntheticPencilInteractionEventSource;

@interface PNPHardwareView : UIView

{
    PNPPencilView *_pencilView;
    PNPSyntheticPencilInteractionEventSource *_eventSource;
    unsigned long long _animationType;
}

@property (nonatomic) unsigned long long animationType;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
