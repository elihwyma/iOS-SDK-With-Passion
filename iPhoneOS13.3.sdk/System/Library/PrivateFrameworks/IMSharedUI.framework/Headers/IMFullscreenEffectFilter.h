//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAFilter, NSArray, UIColor;

@interface IMFullscreenEffectFilter : NSObject
{
    long long _type;
    NSUInteger _direction;
    NSArray *_balloonFilters;
    NSArray *_balloonBackdropFilters;
    CAFilter *_balloonCompositingFilter;
    double _balloonAlpha;
    double _contentAlpha;
    CAFilter *_textCompositingFilter;
    UIColor _textColor;
}

@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) CAFilter *textCompositingFilter; // @synthesize textCompositingFilter=_textCompositingFilter;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) double balloonAlpha; // @synthesize balloonAlpha=_balloonAlpha;
@property(copy, nonatomic) CAFilter *balloonCompositingFilter; // @synthesize balloonCompositingFilter=_balloonCompositingFilter;
@property(copy, nonatomic) NSArray *balloonBackdropFilters; // @synthesize balloonBackdropFilters=_balloonBackdropFilters;
@property(copy, nonatomic) NSArray *balloonFilters; // @synthesize balloonFilters=_balloonFilters;
@property(nonatomic) NSUInteger direction; // @synthesize direction=_direction;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)init;

@end

