/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLFeedCollectionViewLayoutAttributes.h>

@class NSString, UIColor;

@interface NFLHeadlineCollectionViewLayoutAttributes : NFLFeedCollectionViewLayoutAttributes

{
    _Bool _showAccessoryText;
    _Bool _hasVideo;
    _Bool _shouldAdjustPublisherLogo;
    _Bool _layoutHasTooMuchWhiteSpaceInCurrentState;
    _Bool _titleTruncates;
    double _selectionCornerRadius;
    UIColor *_numberedCircleColor;
    UIColor *_backgroundColor;
    long long _titleTextAlignment;
    NSString *_titleFontName;
    double _titleFontSize;
    double _titleLineHeight;
    UIColor *_publisherLogoColor;
    long long _publisherLogoContentMode;
    NSString *_excerptFontName;
    double _excerptFontSize;
    double _excerptLineHeight;
    long long _accessoryContentMode;
    NSString *_accessoryFontName;
    double _accessoryViewBottomPadding;
    double _accessoryViewTopPadding;
    double _accessoryContentViewLeftPadding;
    double _accessoryContentViewRightPadding;
    unsigned long long _numberOfSegments;
    unsigned long long _segmentedColorViewDirection;
    UIColor *_accessoryFontColor;
    UIColor *_accessoryIconColor;
    double _accessoryFontSize;
    double _accessoryLineHeight;
    long long _imagePosition;
    double _minimumHeightBetweenLowestTextFrameAndBottomOfContent;
    double _whiteSpace;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _selectionInset;
    struct CGRect _imageViewFrame;
    struct CGRect _numberedCircleFrame;
    struct CGRect _titleFrame;
    struct CGRect _excerptFrame;
    struct CGRect _accessoryViewFrame;
    struct CGRect _segmentedColorViewFrame;
    struct CGRect _sharrowFrame;
    struct CGRect _publisherLogoFrame;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) struct UIEdgeInsets selectionInset;
@property (nonatomic) double selectionCornerRadius;
@property (nonatomic) struct CGRect imageViewFrame;
@property (nonatomic) struct CGRect numberedCircleFrame;
@property (retain, nonatomic) UIColor *numberedCircleColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct CGRect titleFrame;
@property (nonatomic) long long titleTextAlignment;
@property (retain, nonatomic) NSString *titleFontName;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double titleLineHeight;
@property (retain, nonatomic) UIColor *publisherLogoColor;
@property (nonatomic) long long publisherLogoContentMode;
@property (nonatomic) struct CGRect excerptFrame;
@property (retain, nonatomic) NSString *excerptFontName;
@property (nonatomic) double excerptFontSize;
@property (nonatomic) double excerptLineHeight;
@property (nonatomic) struct CGRect accessoryViewFrame;
@property (nonatomic) long long accessoryContentMode;
@property (retain, nonatomic) NSString *accessoryFontName;
@property (nonatomic) double accessoryViewBottomPadding;
@property (nonatomic) double accessoryViewTopPadding;
@property (nonatomic) double accessoryContentViewLeftPadding;
@property (nonatomic) double accessoryContentViewRightPadding;
@property (nonatomic) struct CGRect segmentedColorViewFrame;
@property (nonatomic) unsigned long long numberOfSegments;
@property (nonatomic) unsigned long long segmentedColorViewDirection;
@property (retain, nonatomic) UIColor *accessoryFontColor;
@property (retain, nonatomic) UIColor *accessoryIconColor;
@property (nonatomic) double accessoryFontSize;
@property (nonatomic) double accessoryLineHeight;
@property (nonatomic) struct CGRect sharrowFrame;
@property (nonatomic, getter=isShowingAccessoryText) _Bool showAccessoryText;
@property (nonatomic) struct CGRect publisherLogoFrame;
@property (nonatomic) long long imagePosition;
@property (nonatomic) _Bool hasVideo;
@property (nonatomic) double minimumHeightBetweenLowestTextFrameAndBottomOfContent;
@property (nonatomic) _Bool shouldAdjustPublisherLogo;
@property (nonatomic) _Bool layoutHasTooMuchWhiteSpaceInCurrentState;
@property (nonatomic) double whiteSpace;
@property (nonatomic) _Bool titleTruncates;

+ (id)zeroHeightLayoutAttributesWithFeedSettings:(id)arg1;
+ (id)nfl_layoutAttributesForWidgetProperties:(id)arg1 feedSettings:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1;
- (void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2;

@end
