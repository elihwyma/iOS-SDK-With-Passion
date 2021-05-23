/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface AKAnnotationTheme : NSObject

{
    int _pageTheme;
}

@property (nonatomic) int pageTheme;
@property (nonatomic, readonly) int annotationStyle;
@property (nonatomic, readonly) _Bool isUnderline;
@property (nonatomic, readonly) UIColor *highlightColor;
@property (nonatomic, readonly) UIColor *noteFillColor;
@property (nonatomic, readonly) UIColor *noteBorderColor;
@property (nonatomic, readonly) double noteShadowRadius;
@property (nonatomic, readonly) double noteShadowOpacity;
@property (nonatomic, readonly) UIColor *noteShadowColor;
@property (nonatomic, readonly) struct CGSize noteShadowOffset;
@property (nonatomic, readonly) UIColor *notesSidebarBarColor;
@property (nonatomic, readonly) UIColor *notesSidebarTextColor;
@property (nonatomic, readonly) UIFont *noteTextFont;
@property (nonatomic, readonly) UIFont *noteTextFontInTable;
@property (nonatomic, readonly) UIColor *noteTextColor;
@property (nonatomic, readonly) UIColor *noteMarkerFillColor;
@property (nonatomic, readonly) UIColor *noteMarkerBorderColor;
@property (nonatomic, readonly) UIColor *noteMarkerStrikethroughColor;

+ (id)themeDescriptions;
+ (id)themeItemForAnnotationStyle:(int)arg1 propertyName:(id)arg2;
+ (id)colorForThemeItem:(id)arg1 pageTheme:(int)arg2;
+ (id)colorForAnnotationStyle:(int)arg1 propertyName:(id)arg2 pageTheme:(int)arg3;
+ (id)blueTheme:(int)arg1;
+ (id)greenTheme:(int)arg1;
+ (id)yellowTheme:(int)arg1;
+ (id)pinkTheme:(int)arg1;
+ (id)purpleTheme:(int)arg1;
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2;
+ (id)underlineTheme:(int)arg1;
+ (id)theme:(int)arg1;
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2 isUnderline:(_Bool)arg3;
+ (id)highlightTextColor:(int)arg1;

@end
