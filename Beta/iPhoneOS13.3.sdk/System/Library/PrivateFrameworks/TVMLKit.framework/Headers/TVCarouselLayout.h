/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVViewLayout.h>

@interface TVCarouselLayout : TVViewLayout

{
    _Bool _parallaxEnabled;
    double _interitemSpacing;
    long long _layoutType;
    unsigned long long _scrollMode;
    double _focusedEdgeExpansion;
    double _revealDistance;
    double _shearAngle;
    struct CGSize _cellSize;
    struct UIEdgeInsets _cellPadding;
}

@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long layoutType;
@property (nonatomic) struct CGSize cellSize;
@property (nonatomic) struct UIEdgeInsets cellPadding;
@property (nonatomic) unsigned long long scrollMode;
@property (nonatomic) double focusedEdgeExpansion;
@property (nonatomic) double revealDistance;
@property (nonatomic, getter=isParallaxEnabled) _Bool parallaxEnabled;
@property (nonatomic) double shearAngle;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (long long)layoutTypeForString:(id)arg1;
+ (long long)layoutTypeForElement:(id)arg1;
+ (unsigned long long)scrollModeForString:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@end
