/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UIColor, UIFont;

@protocol CalendarLabelTextMetrics

@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *text;

- (unsigned short)textRectForBounds:limitedToNumberOfLines: /* Error: Ran out of types for this method. */;

@end
