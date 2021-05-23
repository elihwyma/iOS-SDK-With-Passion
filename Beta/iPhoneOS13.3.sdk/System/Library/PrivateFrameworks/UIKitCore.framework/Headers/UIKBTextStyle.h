/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBTextStyle : NSObject <Swift>

{
    _Bool _ignoreTextMarginOnKey;
    NSString *_fontName;
    double _fontSize;
    double _imageScale;
    double _minFontSize;
    double _kerning;
    double _textOpacity;
    NSString *_textColor;
    NSString *_etchColor;
    long long _alignment;
    double _pathWeight;
    double _fontWeight;
    unsigned long long _anchorCorner;
    long long _selector;
    struct CGPoint _textOffset;
    struct CGPoint _etchOffset;
}

@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) double imageScale;
@property (nonatomic) double minFontSize;
@property (nonatomic) double kerning;
@property (nonatomic) double textOpacity;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *etchColor;
@property (nonatomic) long long alignment;
@property (nonatomic) struct CGPoint textOffset;
@property (nonatomic) struct CGPoint etchOffset;
@property (nonatomic) double pathWeight;
@property (nonatomic) double fontWeight;
@property (nonatomic) unsigned long long anchorCorner;
@property (nonatomic) long long selector;
@property (nonatomic) _Bool ignoreTextMarginOnKey;

+ (id)styleWithFontName:(id)arg1 withFontSize:(double)arg2;
+ (id)styleWithTextColor:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)overlayWithStyle:(id)arg1;

@end
