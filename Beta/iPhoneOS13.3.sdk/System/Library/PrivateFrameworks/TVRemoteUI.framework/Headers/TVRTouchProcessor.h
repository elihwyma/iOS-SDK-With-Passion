/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableSet, TVRTouchpadView;

@protocol TVRTouchProcessorDelegate;

@interface TVRTouchProcessor : NSObject

{
    NSMutableSet *_activeButtonTypes;
    NSMapTable *_touches;
    id <TVRTouchProcessorDelegate> _delegate;
    TVRTouchpadView *_touchpadView;
}

@property (retain, nonatomic) TVRTouchpadView *touchpadView;
@property (weak, nonatomic) id <TVRTouchProcessorDelegate> delegate;

+ (id)touchProcessorForDevice:(id)arg1;

- (id)_init;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)_deviceSupportsMovableBoundingBox;
- (void)_touchTimerExpired:(id)arg1;
- (long long)_defaultRelativeStartingLocation;
- (void)_beginTrackingTouch:(id)arg1 withRelativeLocation:(long long)arg2;
- (void)_dispatchGameControllerEventForTouch:(id)arg1 event:(id)arg2;
- (long long)_relativeTouchLocationForDistanceTraveled:(struct CGPoint)arg1;
- (void)_deliverTouchToDelegate:(id)arg1 info:(id)arg2;
- (void)_beginTrackingAnyTouchIfNeeded;
- (struct CGRect)_boundingBoxForTouch:(id)arg1 relativeStartLocation:(long long)arg2;
- (struct CGPoint)_virtualTouchLocationForTouch:(id)arg1;
- (void)markCurrentTouchToBeCancelled;
- (void)sendPressBegan:(long long)arg1;
- (void)sendPressEnded:(long long)arg1;

@end
