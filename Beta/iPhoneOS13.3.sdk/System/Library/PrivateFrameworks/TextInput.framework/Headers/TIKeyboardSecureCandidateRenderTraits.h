/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, TIKeyboardSecureCandidateLayoutTraits, TIKeyboardSecureCandidateRGBColor, TIKeyboardSecureCandidateTextTraits;

@interface TIKeyboardSecureCandidateRenderTraits : NSObject

{
    _Bool _isCandidateUI;
    TIKeyboardSecureCandidateLayoutTraits *_layoutTraits;
    TIKeyboardSecureCandidateTextTraits *_headerTextTraits;
    TIKeyboardSecureCandidateTextTraits *_inputTextTraits;
    NSString *_prefixText;
    NSString *_suffixText;
    NSArray *_resultCountToSingleCellWidth;
    NSDictionary *_cellWidthOptions;
    double _singleCellHeight;
    double _singleCellVerticalPadding;
    double _dividerLineWidth;
    long long _maxCellCount;
    long long _sharedCellCount;
    double _screenScale;
    long long _cellRenderingStyle;
    NSString *_fontName;
    double _fontSize;
    TIKeyboardSecureCandidateRGBColor *_textColor;
}

@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) TIKeyboardSecureCandidateRGBColor *textColor;
@property (retain, nonatomic) TIKeyboardSecureCandidateLayoutTraits *layoutTraits;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTextTraits;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTextTraits;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *suffixText;
@property (nonatomic) double singleCellWidth;
@property (copy, nonatomic) NSArray *resultCountToSingleCellWidth;
@property (copy, nonatomic) NSDictionary *cellWidthOptions;
@property (nonatomic) double singleCellHeight;
@property (nonatomic) double singleCellVerticalPadding;
@property (nonatomic) double dividerLineWidth;
@property (nonatomic) long long maxCellCount;
@property (nonatomic) long long sharedCellCount;
@property (nonatomic) double screenScale;
@property (nonatomic) long long cellRenderingStyle;
@property (nonatomic) _Bool isCandidateUI;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
