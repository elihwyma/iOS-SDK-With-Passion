/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIStackView.h>

__attribute__((visibility("hidden")))
@interface VUIUIStackView : UIStackView

{
    _Bool _axisFollowsDeviceOrientation;
    _Bool _alignmentFollowsDeviceOrientation;
    long long _lastOrientation;
}

@property (nonatomic) long long lastOrientation;
@property (nonatomic) _Bool axisFollowsDeviceOrientation;
@property (nonatomic) _Bool alignmentFollowsDeviceOrientation;

- (id)initWithFrame:(struct CGRect)arg1;

@end
