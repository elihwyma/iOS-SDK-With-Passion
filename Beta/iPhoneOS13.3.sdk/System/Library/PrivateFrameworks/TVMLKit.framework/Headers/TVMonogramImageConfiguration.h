/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface TVMonogramImageConfiguration : NSObject

{
    long long _style;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_text;
    UIFont *_font;
    UIColor *_bgColor;
    double _diameter;
    double _focusedSizeIncrease;
    UIColor *_textColor;
}

@property (nonatomic, readonly) long long style;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) double diameter;
@property (nonatomic) double focusedSizeIncrease;
@property (retain, nonatomic) UIColor *textColor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(long long)arg1;

@end
