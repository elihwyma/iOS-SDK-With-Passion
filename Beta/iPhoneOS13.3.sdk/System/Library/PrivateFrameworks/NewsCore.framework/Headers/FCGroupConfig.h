/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCColor, FCColorGradient, NSArray, NSDictionary, NSString;

@interface FCGroupConfig : NSObject

{
    FCColor *_groupTitleColor;
    FCColor *_groupDarkStyleTitleColor;
    NSArray *_groupFonts;
    unsigned long long _cutoffTimeSecs;
    unsigned long long _cutoffCount;
    FCColorGradient *_groupBackgroundColorGradient;
    FCColorGradient *_groupDarkStyleBackgroundColorGradient;
    NSDictionary *_dictionary;
    NSDictionary *_articleMetadataByArticleID;
}

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) FCColor *groupTitleColor;
@property (retain, nonatomic) FCColor *groupDarkStyleTitleColor;
@property (nonatomic) unsigned long long cutoffTimeSecs;
@property (nonatomic) unsigned long long cutoffCount;
@property (retain, nonatomic) NSArray *groupFonts;
@property (retain, nonatomic) NSDictionary *articleMetadataByArticleID;
@property (retain, nonatomic) FCColorGradient *groupBackgroundColorGradient;
@property (retain, nonatomic) FCColorGradient *groupDarkStyleBackgroundColorGradient;
@property (nonatomic, readonly) NSString *articleListID;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) NSString *groupSubtitle;
@property (nonatomic, readonly) NSString *groupTitleFontName;
@property (nonatomic, readonly) double groupTitleFontSize;
@property (nonatomic, readonly) double groupTitleFontSizeiPad;
@property (nonatomic, readonly) double groupTitleFontTracking;
@property (nonatomic, readonly) double groupTitleFontTrackingiPad;
@property (nonatomic, readonly) double groupTitleOffsetHeight;
@property (nonatomic, readonly) double groupTitleOffsetHeightiPad;
@property (nonatomic, readonly) double groupTitleOffsetY;
@property (nonatomic, readonly) double groupTitleOffsetYiPad;
@property (nonatomic, readonly) NSString *groupActionTitle;
@property (nonatomic, readonly) NSString *groupActionURLString;
@property (nonatomic, readonly) NSString *sectionID;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSString *feedID;

- (id)initWithDictionary:(id)arg1;

@end
