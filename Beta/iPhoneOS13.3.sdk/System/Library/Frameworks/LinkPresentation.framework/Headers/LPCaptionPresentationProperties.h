/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSNumber, NSString, UIColor;

@interface LPCaptionPresentationProperties : NSObject

{
    NSString *_text;
    NSAttributedString *_attributedText;
    UIColor *_color;
    double _textScale;
    NSNumber *_maximumNumberOfLines;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double textScale;
@property (retain, nonatomic) NSNumber *maximumNumberOfLines;

- (id)init;

@end
