/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionViewCell.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CALayer, CLKDevice, NSHashTable, NSString, REContent, UIColor, UIImage, UIImageView, UIView;

@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextBaseCell : UICollectionViewCell <Swift>

{
    struct CGSize _shadowSize;
    UIImageView *_shadowView;
    CALayer *_imageLayer;
    UIView *_overlayView;
    double _darkeningAmount;
    double _contentBrightness;
    REContent *_content;
    NSHashTable *_layerProviders;
    _Bool _paused;
    id <CLKMonochromeFilterProvider> _filterProvider;
    CLKDevice *_device;
    UIImage *_contentImage;
    UIImage *_overrideContentImage;
    NSString *_representedElementIdentifier;
    UIColor *_imageColor;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) UIImage *contentImage;
@property (retain, nonatomic) UIImage *overrideContentImage;
@property (nonatomic, readonly) REContent *content;
@property (retain, nonatomic) NSString *representedElementIdentifier;
@property (nonatomic, readonly) CALayer *imageLayer;
@property (retain, nonatomic) UIColor *imageColor;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

+ (void)clearLabel:(id)arg1;
+ (struct CGSize)suggestedBodyImageSizeForDevice:(id)arg1;
+ (struct CGSize)suggestedHeaderImageSizeForDevice:(id)arg1;
+ (double)cornerRadiusForDevice:(id)arg1;
+ (Class)suggestedCellClassForContent:(id)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithContent:(id)arg1;
- (void)setContentImage:(id)arg1 animated:(_Bool)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_updateColorOverlay;
- (void)setContentBrightness:(double)arg1 animated:(_Bool)arg2;
- (void)enumerateContentsLayersWithBlock:(CDUnknownBlockType)arg1;
- (void)addContentsLayerProvider:(id)arg1;
- (id)transitionContextInView:(id)arg1;
- (void)removeContentsLayerProvider:(id)arg1;

@end
