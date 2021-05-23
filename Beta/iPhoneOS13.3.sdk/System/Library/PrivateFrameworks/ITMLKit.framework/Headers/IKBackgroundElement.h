/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKAudioElement, NSArray, UIColor;

@interface IKBackgroundElement : IKViewElement

@property (retain, nonatomic, readonly) NSArray *images;
@property (retain, nonatomic, readonly) IKAudioElement *audio;
@property (nonatomic, readonly) double transitionInterval;
@property (retain, nonatomic, readonly) UIColor *backgroundColor;

@end
