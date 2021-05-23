/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class NSArray;

@interface IKSlideshowElement : IKViewElement

@property (nonatomic, readonly) long long showSettings;
@property (retain, nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) unsigned long long transition;
@property (nonatomic, readonly) double transitionInterval;

@end
