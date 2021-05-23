/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class UIColor;

@interface SUScriptColor : SUScriptObject

{
    UIColor *_color;
}

@property (readonly) UIColor *nativeColor;
@property (readonly) double red;
@property (readonly) double green;
@property (readonly) double blue;
@property (readonly) double alpha;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)stringRepresentation;
- (id)initWithUIColor:(id)arg1;
- (id)attributeKeys;
- (id)initWithStyleString:(id)arg1;
- (id)scriptAttributeKeys;
- (struct CGColor *)copyCGColor;
- (void)setHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (void)setRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)setWhite:(double)arg1 alpha:(double)arg2;

@end
