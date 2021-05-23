/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface MiroCircularProgressBar : UIView

@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double animationDuration;

+ (Class)layerClass;

- (id)initWithCoder:(id)arg1;

@end
