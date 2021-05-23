/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@interface IMChatTranscriptLayoutSpecification : NSObject

{
    double _maximumBubbleWidth;
    double _topMargin;
    double _bottomMargin;
    double _leadingMargin;
    double _trailingMargin;
    double _zeroVerticalItemSpacing;
    double _smallVerticalItemSpacing;
    double _mediumVerticalItemSpacing;
    double _largeVerticalItemSpacing;
    struct CGSize _layoutBoundsSize;
}

@property (nonatomic) struct CGSize layoutBoundsSize;
@property (nonatomic) double maximumBubbleWidth;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (nonatomic) double zeroVerticalItemSpacing;
@property (nonatomic) double smallVerticalItemSpacing;
@property (nonatomic) double mediumVerticalItemSpacing;
@property (nonatomic) double largeVerticalItemSpacing;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
