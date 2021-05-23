/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFMailComposeHeaderView.h>

@class NSMutableArray, UISegmentedControl;

@protocol MFComposeImageSizeViewDelegate;

@interface MFComposeImageSizeView : MFMailComposeHeaderView

{
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_visibleScales;
}

@property (weak, nonatomic) id <MFComposeImageSizeViewDelegate> delegate;

- (void)setScale:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)segmentedControlChanged;
- (unsigned long long)_scaleLabelIndexForScale:(unsigned long long)arg1;
- (unsigned long long)_insertIndexForScale:(unsigned long long)arg1;
- (void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2;
- (void)removeSizeDescriptionForScale:(unsigned long long)arg1;

@end
