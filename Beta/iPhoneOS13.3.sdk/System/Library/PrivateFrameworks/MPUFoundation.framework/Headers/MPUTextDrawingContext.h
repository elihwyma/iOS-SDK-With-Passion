/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSDictionary, NSString, NSStringDrawingContext, UIImage;

@interface MPUTextDrawingContext : NSObject

{
    NSString *_text;
    NSAttributedString *_attributedText;
    NSStringDrawingContext *_stringDrawingContext;
    long long _stringDrawingOptions;
    NSDictionary *_uniformTextAttributes;
    double _firstBaselineOffsetFromTop;
    double _lastBaselineOffsetFromBottom;
    UIImage *_image;
    struct CGSize _boundingSize;
}

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (copy, nonatomic, setter=_setAttributedText:) NSAttributedString *attributedText;
@property (retain, nonatomic, setter=_setStringDrawingContext:) NSStringDrawingContext *stringDrawingContext;
@property (nonatomic, setter=_setStringDrawingOptions:) long long stringDrawingOptions;
@property (copy, nonatomic, setter=_setUniformTextAttributes:) NSDictionary *uniformTextAttributes;
@property (retain, nonatomic, getter=_image, setter=_setImage:) UIImage *image;
@property (nonatomic, setter=_setBoundingSize:) struct CGSize boundingSize;
@property (nonatomic, setter=_setFirstBaselineOffsetFromTop:) double firstBaselineOffsetFromTop;
@property (nonatomic, setter=_setLastBaselineOffsetFromBottom:) double lastBaselineOffsetFromBottom;

@end
