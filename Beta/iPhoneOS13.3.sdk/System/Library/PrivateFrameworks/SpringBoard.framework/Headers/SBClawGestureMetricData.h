/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAWDMetricData.h>

@interface SBClawGestureMetricData : SBAWDMetricData

{
    _Bool _didPressLock;
    _Bool _didPressVolumeUp;
    _Bool _didPressVolumeDown;
    _Bool _didTriggerSOS;
    unsigned long long _duration;
}

@property (nonatomic) _Bool didPressLock;
@property (nonatomic) _Bool didPressVolumeUp;
@property (nonatomic) _Bool didPressVolumeDown;
@property (nonatomic) _Bool didTriggerSOS;
@property (nonatomic) unsigned long long duration;

@end
