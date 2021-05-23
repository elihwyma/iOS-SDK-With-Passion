/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <CameraEditKit/Swift-Protocol.h>

@class UIColor;

@protocol CEKTickMarksConfiguration <Swift>

@property (nonatomic) long long mainTickMarkInterval;
@property (nonatomic) double tickMarkSpacing;
@property (nonatomic) long long mainTickMarkOffset;
@property (nonatomic) _Bool useTickMarkLegibilityShadows;
@property (retain, nonatomic) UIColor *mainTickMarkColor;
@property (retain, nonatomic) UIColor *secondaryTickMarkColor;

@end
