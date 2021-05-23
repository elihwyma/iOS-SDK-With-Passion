/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class CAFilter, NSArray, UIColor;

@interface IMFullscreenEffectFilter : NSObject

{
    long long _type;
    unsigned long long _direction;
    NSArray *_balloonFilters;
    NSArray *_balloonBackdropFilters;
    CAFilter *_balloonCompositingFilter;
    double _balloonAlpha;
    double _contentAlpha;
    CAFilter *_textCompositingFilter;
    struct UIColor *_textColor;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long direction;
@property (copy, nonatomic) NSArray *balloonFilters;
@property (copy, nonatomic) NSArray *balloonBackdropFilters;
@property (copy, nonatomic) CAFilter *balloonCompositingFilter;
@property (nonatomic) double balloonAlpha;
@property (nonatomic) double contentAlpha;
@property (copy, nonatomic) CAFilter *textCompositingFilter;
@property (copy, nonatomic) UIColor *textColor;

- (id)init;

@end
