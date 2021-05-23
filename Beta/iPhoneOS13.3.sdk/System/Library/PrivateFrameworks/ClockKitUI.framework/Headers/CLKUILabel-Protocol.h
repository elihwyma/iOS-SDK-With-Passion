/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <ClockKitUI/Swift-Protocol.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@protocol CLKUILabel <Swift>

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) double _lastLineBaseline;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic, readonly) struct UIEdgeInsets opticalInsets;

@end
