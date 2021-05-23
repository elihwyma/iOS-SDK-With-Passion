/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCALayerPromise.h>

@class NSArray, NSString, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleCALayerPromise : PXCALayerPromise

{
    _Bool _diagnosticsEnabled;
    NSString *_titleText;
    NSString *_subtitleText;
    PXTitleSubtitleLabelSpec *_spec;
    long long _typesettingMode;
    double _layerLastBaseline;
    double __textScaleFactor;
    NSArray *_diagnosticsRenderedLines;
    struct CGRect _layerContentBounds;
}

@property (nonatomic, readonly) double _textScaleFactor;
@property (nonatomic) _Bool diagnosticsEnabled;
@property (copy, nonatomic, readonly) NSArray *diagnosticsRenderedLines;
@property (copy, nonatomic, readonly) NSString *titleText;
@property (copy, nonatomic, readonly) NSString *subtitleText;
@property (nonatomic, readonly) PXTitleSubtitleLabelSpec *spec;
@property (nonatomic, readonly) long long typesettingMode;
@property (nonatomic, readonly) struct CGRect layerContentBounds;
@property (nonatomic, readonly) double layerLastBaseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) double contentsScale;
@property (nonatomic) _Bool rendersAsynchronously;

- (id)init;
- (void)setTitleText:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setTypesettingMode:(long long)arg1;
- (id)createCustomLayer;
- (void)drawLayerContentInContext:(struct CGContext *)arg1;
- (id)_linesToRenderWithContext:(struct CGContext *)arg1;
- (id)_attributedStringForLabelWithText:(id)arg1 spec:(id)arg2;
- (id)_stringByReplacingNonbreakableWhitespaceToAllowLineWrapping:(id)arg1 maxWidth:(double)arg2;

@end
