/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface RCSelectionTouchTrackingInfo : NSObject

{
    double _lastLocation;
    UITouch *_touch;
    double _trackingOffset;
    long long _selectionBarType;
    long long _selectionAffinity;
}

@property (weak, nonatomic) UITouch *touch;
@property (nonatomic) double trackingOffset;
@property (nonatomic) long long selectionBarType;
@property (nonatomic) long long selectionAffinity;

- (id)description;
- (void)updateTrackingInfo;

@end
