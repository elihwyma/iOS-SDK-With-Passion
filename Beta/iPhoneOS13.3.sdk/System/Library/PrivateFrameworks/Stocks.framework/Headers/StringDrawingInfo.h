/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface StringDrawingInfo : NSObject

{
    NSString *_string;
    UIColor *_color;
    UIFont *_font;
    struct CGSize _size;
}

@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) struct CGSize size;

+ (id)stringDrawingInfoWithString:(id)arg1 color:(id)arg2 font:(id)arg3 size:(struct CGSize)arg4;

@end
