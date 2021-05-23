/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <QuartzCore/CALayer.h>

@class ISIcon;

@interface ISIconLayer : CALayer

{
    ISIcon *_icon;
    unsigned long long _variantOptions;
    unsigned long long _badgeOptions;
    unsigned long long _backgroundStyle;
    unsigned long long _shape;
    _Bool _shouldApplyMask;
    _Bool _drawBorder;
    unsigned long long _iconShape;
}

@property (retain, nonatomic) ISIcon *icon;
@property (nonatomic) unsigned long long variantOptions;
@property (nonatomic) unsigned long long badgeOptions;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long iconShape;
@property (nonatomic) _Bool shouldApplyMask;
@property (nonatomic) _Bool drawBorder;

- (id)init;
- (id)initWithIcon:(id)arg1;
- (void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2;

@end
