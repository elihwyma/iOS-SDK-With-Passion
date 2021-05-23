/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class CALayer, NSArray, NSString, PXTitleSubtitleCALayerPromise, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleUILabel : UIView <Swift>

{
    _Bool _needsUpdateLayerPromise;
    _Bool _rendersTextAsynchronously;
    _Bool _shouldRasterizeTextLayer;
    _Bool _diagnosticsEnabled;
    NSString *_titleText;
    NSString *_subtitleText;
    PXTitleSubtitleLabelSpec *_spec;
    long long _typesettingMode;
    PXTitleSubtitleCALayerPromise *__layerPromise;
    CALayer *__contentLayer;
}

@property (retain, nonatomic, setter=_setLayerPromise:) PXTitleSubtitleCALayerPromise *_layerPromise;
@property (retain, nonatomic, setter=_setContentLayer:) CALayer *_contentLayer;
@property (nonatomic) _Bool diagnosticsEnabled;
@property (nonatomic, readonly) NSArray *diagnosticsRenderedLines;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) PXTitleSubtitleLabelSpec *spec;
@property (nonatomic) long long typesettingMode;
@property (nonatomic) _Bool rendersTextAsynchronously;
@property (nonatomic) _Bool shouldRasterizeTextLayer;
@property (nonatomic, readonly) double lastBaseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)contentBounds;
- (void)_updateContentLayer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_PXTitleSubtitleUILabelCommonInitialization;
- (void)_handleChangeFromBounds:(struct CGRect)arg1;
- (void)_invalidateLayerPromise;
- (void)_updateLayerPromiseIfNeeded;

@end
