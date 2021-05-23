/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVViewLayout.h>

@class NSString, UIColor;

@interface TVRatingBadgeLayout : TVViewLayout

{
    UIColor *_fillColor;
    NSString *_ratingStyle;
    NSString *_ratingStyleAXSmall;
    NSString *_ratingStyleAXLarge;
    double _interitemSpacing;
    double _interitemSpacingAXSmall;
    double _interitemSpacingAXLarge;
}

@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) NSString *ratingStyle;
@property (retain, nonatomic) NSString *ratingStyleAXSmall;
@property (retain, nonatomic) NSString *ratingStyleAXLarge;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double interitemSpacingAXSmall;
@property (nonatomic) double interitemSpacingAXLarge;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

@end
