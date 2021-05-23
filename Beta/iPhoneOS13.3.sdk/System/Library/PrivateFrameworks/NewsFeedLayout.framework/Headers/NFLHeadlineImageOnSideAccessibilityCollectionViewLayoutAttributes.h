/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@class NSString;

@interface NFLHeadlineImageOnSideAccessibilityCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes

{
    NSString *_titleFontName;
    double _titleFontSize;
    double _titleLineHeight;
    struct _NSRange _titleNextToImageRange;
}

@property (nonatomic) struct _NSRange titleNextToImageRange;
@property (nonatomic) struct CGRect titleNextToImageFrame;
@property (nonatomic) struct CGRect titleBellowImageFrame;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setExcerptFontName:(id)arg1;
- (void)setExcerptFontSize:(double)arg1;
- (id)excerptFontName;
- (double)excerptFontSize;
- (void)setExcerptLineHeight:(double)arg1;
- (double)excerptLineHeight;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1;
- (void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2;

@end
