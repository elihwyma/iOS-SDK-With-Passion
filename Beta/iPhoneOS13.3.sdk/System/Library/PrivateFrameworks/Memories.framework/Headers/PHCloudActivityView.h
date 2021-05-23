/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class CALayer, CAPropertyAnimation;

__attribute__((visibility("hidden")))
@interface PHCloudActivityView : UIView

{
    CALayer *_cloudImageLayer;
    CALayer *_completedImageLayer;
    CALayer *_loadingImageLayer;
    CAPropertyAnimation *_rotationAnimation;
    unsigned long long _state;
    double _initialWidth;
}

@property (retain, nonatomic) CALayer *cloudImageLayer;
@property (retain, nonatomic) CALayer *completedImageLayer;
@property (retain, nonatomic) CALayer *loadingImageLayer;
@property (retain, nonatomic) CAPropertyAnimation *rotationAnimation;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double initialWidth;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)registerForNotifications;
- (void)persistenceManagerDidChange:(id)arg1;
- (void)streamingDidStart:(id)arg1;
- (void)streamingDidStop:(id)arg1;
- (void)updateViewVisibility;
- (void)stopRotationAnimation;
- (void)startRotationAnimation;

@end
