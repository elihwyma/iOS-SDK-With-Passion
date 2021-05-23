/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CAFilter, NSArray, UIColor;

@interface CKFullscreenEffectMessageFilter : NSObject

{
    int _type;
    int _direction;
    NSArray *_balloonFilters;
    NSArray *_balloonBackdropFilters;
    CAFilter *_balloonCompositingFilter;
    double _balloonAlpha;
    double _contentAlpha;
    CAFilter *_textCompositingFilter;
    UIColor *_textColor;
}

@property (nonatomic) int type;
@property (nonatomic) int direction;
@property (copy, nonatomic) NSArray *balloonFilters;
@property (copy, nonatomic) NSArray *balloonBackdropFilters;
@property (copy, nonatomic) CAFilter *balloonCompositingFilter;
@property (nonatomic) double balloonAlpha;
@property (nonatomic) double contentAlpha;
@property (copy, nonatomic) CAFilter *textCompositingFilter;
@property (copy, nonatomic) UIColor *textColor;

- (id)init;

@end
