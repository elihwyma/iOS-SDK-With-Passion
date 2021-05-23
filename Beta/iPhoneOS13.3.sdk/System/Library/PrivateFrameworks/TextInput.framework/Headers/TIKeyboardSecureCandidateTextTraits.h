/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString, TIKeyboardSecureCandidateRGBColor;

@interface TIKeyboardSecureCandidateTextTraits : NSObject

{
    NSString *_fontName;
    double _maxFontSize;
    double _minFontSize;
    TIKeyboardSecureCandidateRGBColor *_textColor;
    double _yCoordinate;
    double _baselineOffset;
}

@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double maxFontSize;
@property (nonatomic) double minFontSize;
@property (retain, nonatomic) TIKeyboardSecureCandidateRGBColor *textColor;
@property (nonatomic) double yCoordinate;
@property (nonatomic) double baselineOffset;

+ (_Bool)supportsSecureCoding;
+ (id)traitsWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3;
- (id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6;

@end
