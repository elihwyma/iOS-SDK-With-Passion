/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class NSString, NTKColoringLabel, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextLargeWithDetailTextCell : NTKUpNextBaseCell

{
    UILayoutGuide *_contentLayoutGuide;
    NTKUpNextImageView *_bodyImage;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_bodyLabel;
    NTKColoringLabel *_detail1Label;
    NTKColoringLabel *_detail2Label;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)setPaused:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureWithContent:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;

@end
