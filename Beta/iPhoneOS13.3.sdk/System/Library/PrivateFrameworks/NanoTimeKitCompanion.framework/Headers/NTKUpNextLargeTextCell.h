/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class CLKFont, NSArray, NSString, NTKColoringLabel, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextLargeTextCell : NTKUpNextBaseCell

{
    _Bool _showingHeaderImage;
    _Bool _showingBodyImage;
    unsigned int _currentImageEdge;
    CLKFont *_standardBodyFont;
    CLKFont *_monospaceBodyFont;
    UILayoutGuide *_contentLayoutGuide;
    NTKUpNextImageView *_headerImage;
    NTKUpNextImageView *_bodyImage;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_bodyLabel;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_bodyWithLeftImageConstraints;
    NSArray *_bodyWithNoImageConstraints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)setPaused:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)configureWithContent:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;

@end
