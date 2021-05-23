/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <QuartzCore/CALayer.h>

@class NSMutableArray;

@interface BubbleTextLayer : CALayer

{
    struct CGSize _textSize;
    struct CGSize _leftImageLayerSize;
    struct CGSize _rightAccessoryLayerSize;
    struct CGSize _contentSize;
    struct CGSize _bubbleSize;
    struct CGRect _textFrame;
    struct CGRect _bubbleFrame;
    struct CGSize _boundsSizeConstraint;
    void *_font;
    struct __CTFont *_curCTFont;
    struct __CTLine *_theLine;
    double _descent;
    double _ascent;
    double _leading;
    struct CGRect _fontBounds;
    NSMutableArray *_annotationPoints;
    struct CGColor *_generalShadowColor;
    struct CGColor *_whiteShadowColor;
    CALayer *_leftImageLayer;
    CALayer *_rightAccessoryLayer;
    id _owningView;
}

@property (nonatomic) id owningView;
@property (retain, nonatomic) struct CGImage *image;
@property (retain, nonatomic) CALayer *rightAccessoryLayer;
@property (retain, nonatomic) struct CGColor *fillColor;
@property (retain, nonatomic) struct CGColor *fillColor2;
@property (retain, nonatomic) struct CGColor *frameColor;
@property (retain, nonatomic) struct CGColor *foregroundColor;
@property (nonatomic) double frameWidth;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) id string;
@property (nonatomic, readonly) double textBaselineOffset;
@property (nonatomic, readonly) struct CGRect textFrame;
@property (nonatomic) struct CGSize boundsSizeConstraint;

+ (_Bool)needsDisplayForKey:(id)arg1;

- (void)dealloc;
- (void)setFont:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithOwningView:(id)arg1;
- (void)layoutSublayers;
- (struct CGSize)preferredFrameSize;
- (struct CGSize)getImagePreferredSize;
- (struct CGSize)getRightAccessoryLayerPreferredSize;
- (struct CGSize)textPreferredFrameSizeForLayerSize:(struct CGSize)arg1;
- (_Bool)isAnnotationBubble;
- (struct CGSize)calculatePreferredSubframeSizes;
- (void)addAnnotationPoint:(struct CGPoint)arg1;

@end
