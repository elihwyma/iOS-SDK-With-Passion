/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NUTrait, UITraitCollection;

@interface NUArticleExcerptTraits : NSObject <Swift>

{
    double _hairlineSeparatorHeight;
    double _topMarginAboveHeadlineTitle;
    double _topMarginAboveHeadlineDate;
    double _topMarginAboveHairlineSeparator;
    double _topMarginAboveExcerpt;
    double _scale;
    UITraitCollection *_traitCollection;
    NUTrait *_headlineImageRatioTrait;
    NUTrait *_headlineImageMarginTrait;
    NUTrait *_contentMarginTrait;
    NUTrait *_excerptMarginTrait;
    NUTrait *_readMoreMinTopMarginTrait;
    NUTrait *_bottomMaringTrait;
    struct CGSize _size;
}

@property (copy, nonatomic, readonly) UITraitCollection *traitCollection;
@property (retain, nonatomic) NUTrait *headlineImageRatioTrait;
@property (retain, nonatomic) NUTrait *headlineImageMarginTrait;
@property (retain, nonatomic) NUTrait *contentMarginTrait;
@property (retain, nonatomic) NUTrait *excerptMarginTrait;
@property (retain, nonatomic) NUTrait *readMoreMinTopMarginTrait;
@property (retain, nonatomic) NUTrait *bottomMaringTrait;
@property (nonatomic, readonly) double headlineImageHeight;
@property (nonatomic, readonly) double headlineImageMargin;
@property (nonatomic, readonly) double excerptMargin;
@property (nonatomic, readonly) double contentMargin;
@property (nonatomic, readonly) double hairlineSeparatorHeight;
@property (nonatomic, readonly) double topMarginAboveHeadlineTitle;
@property (nonatomic, readonly) double topMarginAboveHeadlineDate;
@property (nonatomic, readonly) double topMarginAboveHairlineSeparator;
@property (nonatomic, readonly) double topMarginAboveExcerpt;
@property (nonatomic, readonly) double minTopMaginAboveReadMoreButton;
@property (nonatomic, readonly) double bottomMargin;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTraitCollection:(id)arg1 size:(struct CGSize)arg2;

@end
