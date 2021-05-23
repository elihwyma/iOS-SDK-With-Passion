/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@interface SXComponentTextRules : NSObject <Swift>

{
    _Bool _shouldHyphenate;
    _Bool _isSelectable;
    _Bool _allowsScrollPositionRestore;
    double _fontResizingTresholdFactor;
    double _fontSizeConstant;
    double _lineHeightConstant;
    double _dropCapConstant;
    long long _textFlow;
    NSString *_fontTextStyle;
}

@property (nonatomic) double fontResizingTresholdFactor;
@property (nonatomic) double fontSizeConstant;
@property (nonatomic) double lineHeightConstant;
@property (nonatomic) double dropCapConstant;
@property (nonatomic) _Bool shouldHyphenate;
@property (nonatomic) _Bool isSelectable;
@property (nonatomic) _Bool allowsScrollPositionRestore;
@property (nonatomic) long long textFlow;
@property (copy, nonatomic) NSString *fontTextStyle;

+ (id)smallTextRules;
+ (id)defaultTextRules;
+ (id)bodyTextRules;
+ (id)titleTextRules;
+ (id)headingTextRules;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
