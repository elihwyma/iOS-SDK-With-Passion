/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class UIFont;

@interface HUNavigationButtonLayoutOptions : NSObject <Swift>

{
    UIFont *_font;
    double _minTextButtonWidth;
}

@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double minTextButtonWidth;

+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
