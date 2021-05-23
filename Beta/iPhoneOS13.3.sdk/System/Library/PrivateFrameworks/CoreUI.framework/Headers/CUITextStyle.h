/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUITextStyle : CUINamedLookup

{
    NSString *_fontName;
    double _fontSize;
    double _maxPointSize;
    double _minPointSize;
    long long _scalingStyle;
    long long _alignment;
}

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double maxPointSize;
@property (nonatomic, readonly) double minPointSize;
@property (nonatomic, readonly) long long scalingStyle;
@property (nonatomic, readonly) long long alignment;

- (void)dealloc;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end
