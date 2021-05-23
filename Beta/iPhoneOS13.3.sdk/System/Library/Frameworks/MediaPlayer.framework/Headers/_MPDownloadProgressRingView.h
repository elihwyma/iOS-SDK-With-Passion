/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@interface _MPDownloadProgressRingView : UIView

{
    double _progress;
}

@property (nonatomic) double progress;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateShapePath;

@end
