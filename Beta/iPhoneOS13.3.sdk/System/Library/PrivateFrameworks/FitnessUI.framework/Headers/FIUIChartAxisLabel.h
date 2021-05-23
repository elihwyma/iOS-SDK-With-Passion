/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface FIUIChartAxisLabel : NSObject

{
    _Bool _useReversePlacement;
    NSString *_text;
    id _location;
    UIColor *_labelColor;
    UIColor *_shadowColor;
    double _shadowBlur;
    struct CGSize _shadowOffset;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) id location;
@property (nonatomic) _Bool useReversePlacement;
@property (retain, nonatomic) UIColor *labelColor;
@property (nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowBlur;

- (id)description;

@end
