/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSDeclaration.h>

@class IKColor;

@interface IKCSSDeclarationColor : IKCSSDeclaration

{
    long long _sourceType;
    IKColor *_color;
}

@property long long sourceType;
@property (retain, nonatomic) IKColor *color;

+ (id)_stringForColor:(id)arg1 sourceType:(long long)arg2;

- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (id)_colorFromParseObject:(id)arg1 sourceType:(long long *)arg2;
- (id)_keywordKolorFromParseToken:(id)arg1;
- (id)_linearGradientKolorFromParseFunction:(id)arg1;
- (id)_kolorFromParseObject:(id)arg1 sourceType:(long long *)arg2;

@end
