/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class NSString, UIColor;

@protocol MKInfoCardTheme <Swift>

@property (nonatomic, readonly) unsigned long long themeType;
@property (nonatomic, readonly) NSString *javaScriptName;
@property (nonatomic, readonly) _Bool isDarkTheme;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) UIColor *lightTextColor;
@property (nonatomic, readonly) UIColor *tertiaryTextColor;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UIColor *highlightedTintColor;
@property (nonatomic, readonly) UIColor *separatorLineColor;
@property (nonatomic, readonly) UIColor *rowColor;
@property (nonatomic, readonly) UIColor *selectedRowColor;
@property (nonatomic, readonly) UIColor *highlightedActionRowTextColor;
@property (nonatomic, readonly) UIColor *disabledActionRowTextColor;
@property (nonatomic, readonly) UIColor *disabledActionRowBackgroundColor;
@property (nonatomic, readonly) UIColor *normalActionRowBackgroundColor;
@property (nonatomic, readonly) UIColor *normalActionRowBackgroundPressedColor;
@property (nonatomic, readonly) UIColor *headerPrimaryButtonNormalColor;
@property (nonatomic, readonly) UIColor *headerPrimaryButtonHighlightedColor;
@property (nonatomic, readonly) UIColor *transitOntimeTextColor;
@property (nonatomic, readonly) UIColor *transitDelayedTextColor;
@property (nonatomic, readonly) UIColor *transitChevronBackgroundColor;
@property (nonatomic, readonly) UIColor *normalBackgroundColor;
@property (nonatomic, readonly) UIColor *buttonNormalColor;
@property (nonatomic, readonly) UIColor *buttonHighlightedColor;

@end
