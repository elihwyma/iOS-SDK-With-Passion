/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLFeedCollectionViewLayoutAttributes.h>

@class NSParagraphStyle, NSString, UIColor, UIFont;

@interface NFLCollapsedHeadlineViewLayoutAttributes : NFLFeedCollectionViewLayoutAttributes

{
    NSParagraphStyle *_titleParagraphStyle;
    long long _titleNumberOfLines;
    UIFont *_titleFont;
    UIFont *_publisherTextFont;
    UIColor *_publisherTextColor;
    long long _publisherTextNumberOfLines;
    NSParagraphStyle *_publisherTextParagraphStyle;
    NSString *_titleFontName;
    double _titleFontSize;
    struct CGRect _titleFrame;
    struct CGRect _publisherLogoFrame;
    struct CGRect _publisherTextFrame;
}

@property (nonatomic) struct CGRect titleFrame;
@property (retain, nonatomic) NSString *titleFontName;
@property (nonatomic) double titleFontSize;
@property (nonatomic) long long titleNumberOfLines;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) struct CGRect publisherLogoFrame;
@property (nonatomic) struct CGRect publisherTextFrame;
@property (retain, nonatomic) UIFont *publisherTextFont;
@property (copy, nonatomic) UIColor *publisherTextColor;
@property (nonatomic) long long publisherTextNumberOfLines;
@property (nonatomic, readonly) NSParagraphStyle *titleParagraphStyle;
@property (nonatomic, readonly) NSParagraphStyle *publisherTextParagraphStyle;

+ (double)publisherTextHeightForLabelSize:(struct CGSize)arg1 font:(id)arg2;
+ (id)layoutAttributesForCellWithIndexPath:(id)arg1 feedSettings:(id)arg2;
+ (struct CGSize)publisherLogoSizeFeedSettings:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
