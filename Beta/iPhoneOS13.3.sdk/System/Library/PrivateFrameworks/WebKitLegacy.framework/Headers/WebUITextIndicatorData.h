/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray, UIColor, UIImage;

@interface WebUITextIndicatorData : NSObject

{
    UIImage *_dataInteractionImage;
    NSArray *_textRectsInBoundingRectCoordinates;
    UIImage *_contentImageWithHighlight;
    UIImage *_contentImageWithoutSelection;
    UIImage *_contentImage;
    UIColor *_estimatedBackgroundColor;
    double _contentImageScaleFactor;
    struct CGRect _selectionRectInRootViewCoordinates;
    struct CGRect _textBoundingRectInRootViewCoordinates;
    struct CGRect _contentImageWithoutSelectionRectInRootViewCoordinates;
}

@property (retain, nonatomic) UIImage *dataInteractionImage;
@property (nonatomic) struct CGRect selectionRectInRootViewCoordinates;
@property (nonatomic) struct CGRect textBoundingRectInRootViewCoordinates;
@property (retain, nonatomic) NSArray *textRectsInBoundingRectCoordinates;
@property (nonatomic) double contentImageScaleFactor;
@property (retain, nonatomic) UIImage *contentImageWithHighlight;
@property (retain, nonatomic) UIImage *contentImage;
@property (retain, nonatomic) UIImage *contentImageWithoutSelection;
@property (nonatomic) struct CGRect contentImageWithoutSelectionRectInRootViewCoordinates;
@property (retain, nonatomic) UIColor *estimatedBackgroundColor;

- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 textIndicatorData:(const struct TextIndicatorData *)arg2 scale:(double)arg3;
- (id)initWithImage:(struct CGImage *)arg1 scale:(double)arg2;

@end
