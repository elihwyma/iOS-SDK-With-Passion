/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSMutableArray, UIMorphingLabel;

__attribute__((visibility("hidden")))
@interface UIMorphingLabelGlyphSet : NSObject

{
    UIMorphingLabel *_label;
    NSAttributedString *_attributedString;
    struct __CTLine *_line;
    NSMutableArray *_glyphViews;
    unsigned long long _glyphCount;
    unsigned short *_glyphs;
    struct CGRect *_glyphFrames;
    struct CGPoint *_glyphPositions;
    struct CGPoint _lineOrigin;
    double _lineWidth;
}

@property (nonatomic, readonly) unsigned long long glyphCount;
@property (nonatomic, readonly) const unsigned short *glyphs;
@property (nonatomic, readonly) const struct CGRect *glyphFrames;
@property (nonatomic, readonly) const struct CGPoint *glyphPositions;
@property (nonatomic, readonly) NSArray *glyphViews;
@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) struct CGPoint lineOrigin;
@property (nonatomic, readonly) double lineWidth;

- (void)dealloc;
- (void)buildGlyphViews;
- (id)initWithLabel:(id)arg1 attributedString:(id)arg2;
- (void)removeGlyphs;
- (void)placeGlyphs;
- (struct CGRect)boundingRectForGlyphsInRange:(struct _NSRange)arg1;

@end
