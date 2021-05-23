/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@interface PMRoundProgressView : UIView

{
    double _progress;
}

@property (nonatomic) double progress;
@property (nonatomic, readonly) double displayedProgress;

+ (Class)layerClass;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end
