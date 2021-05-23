/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCColor, FCColorGradient, NSArray, NSDictionary, NSString;

@interface FCSpecialEventsOperationResult : NSObject

{
    _Bool _micaEnabled;
    long long _type;
    NSString *_titleText;
    FCColor *_titleColor;
    NSString *_fontName;
    double _fontSize;
    double _fontSizeiPad;
    double _fontTracking;
    double _fontTrackingiPad;
    double _titleOffsetHeight;
    double _titleOffsetHeightiPad;
    double _titleOffsetY;
    double _titleOffsetYiPad;
    NSString *_micaAnimationFileUrlString;
    NSString *_micaAnimationFileUrlStringiPad;
    NSString *_actionTitle;
    NSString *_actionUrlString;
    FCColorGradient *_backgroundColorGradient;
    FCColorGradient *_darkStyleBackgroundColorGradient;
    NSArray *_groupFonts;
    NSArray *_specialEventItems;
    NSDictionary *_specialEventHeadlinesByArticleID;
    NSString *_fontUrlString;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) FCColor *titleColor;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *fontUrlString;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontTracking;
@property (copy, nonatomic) NSString *micaAnimationFileUrlString;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *actionUrlString;
@property (copy, nonatomic) FCColorGradient *backgroundColorGradient;
@property (retain, nonatomic) NSArray *groupFonts;
@property (retain, nonatomic) NSArray *specialEventItems;
@property (retain, nonatomic) NSDictionary *specialEventHeadlinesByArticleID;
@property (nonatomic, readonly) double fontSizeiPad;
@property (nonatomic, readonly) double fontTrackingiPad;
@property (nonatomic, readonly) double titleOffsetHeight;
@property (nonatomic, readonly) double titleOffsetHeightiPad;
@property (nonatomic, readonly) double titleOffsetY;
@property (nonatomic, readonly) double titleOffsetYiPad;
@property (copy, nonatomic, readonly) NSString *micaAnimationFileUrlStringiPad;
@property (nonatomic, readonly) _Bool micaEnabled;
@property (copy, nonatomic, readonly) FCColorGradient *darkStyleBackgroundColorGradient;

- (id)initWithType:(long long)arg1 specialEventsGroupConfig:(id)arg2 specialEventItems:(id)arg3 specialEventHeadlinesByArticleID:(id)arg4;

@end
