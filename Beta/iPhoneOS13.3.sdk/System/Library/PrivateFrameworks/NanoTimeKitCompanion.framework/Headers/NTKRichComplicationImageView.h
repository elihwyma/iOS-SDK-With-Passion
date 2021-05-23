/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKDevice, NSString, NTKStackedImagesComplicationImageView;

@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationImageView : UIView <Swift>

{
    _Bool _useAccentColor;
    _Bool _hostingOverrideView;
    _Bool _paused;
    _Bool _inMonochromeMode;
    _Bool _prefersFilterOverTransition;
    id <CLKMonochromeFilterProvider> _filterProvider;
    CLKDevice *_device;
    UIView *_richComplicationImageView;
    NTKStackedImagesComplicationImageView *_monochromeImageView;
    long long _imageViewContentMode;
    long long _monochromeFilterType;
}

@property (weak, nonatomic) UIView *richComplicationImageView;
@property (weak, nonatomic) NTKStackedImagesComplicationImageView *monochromeImageView;
@property (nonatomic, getter=isHostingOverrideView) _Bool hostingOverrideView;
@property (nonatomic, readonly) long long imageViewContentMode;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) long long monochromeFilterType;
@property (nonatomic) _Bool inMonochromeMode;
@property (nonatomic) _Bool prefersFilterOverTransition;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) _Bool useAccentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)layoutSubviews;
- (void)setImageViewContentMode:(long long)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initWithDevice:(id)arg1 useAccentColor:(_Bool)arg2;
- (void)setImageProvider:(id)arg1 reason:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (id)interpolatedColorForView:(id)arg1;
- (_Bool)viewShouldIgnoreTwoPieceImage:(id)arg1;
- (long long)_filterStyle;

@end
