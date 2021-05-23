/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class UIColor, UIFont;

@interface PXWidgetBarSpec : NSObject <Swift>

{
    _Bool _shouldUseSingleLine;
    struct UIColor *_textColor;
    struct UIFont *_primaryFont;
    struct UIFont *_secondaryFont;
    double _distanceBetweenTopAndFirstBaseline;
    double _distanceBetweenLastBaselineAndBottom;
    double _minimumDistanceBetweenTopAndFirstAscender;
    double _minimumDistanceBetweenLastDescenderAndBottom;
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;
    double _horizontalSpacingBetweenTitleAndSubtitle;
    struct UIEdgeInsets _contentInsets;
}

@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) _Bool shouldUseSingleLine;
@property (nonatomic) double distanceBetweenTopAndFirstBaseline;
@property (nonatomic) double distanceBetweenLastBaselineAndBottom;
@property (nonatomic) double minimumDistanceBetweenTopAndFirstAscender;
@property (nonatomic) double minimumDistanceBetweenLastDescenderAndBottom;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
