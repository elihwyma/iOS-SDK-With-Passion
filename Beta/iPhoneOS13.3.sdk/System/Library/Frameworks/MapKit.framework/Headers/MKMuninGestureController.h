/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMuninView, NSDate, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, VKCompoundAnimation;

@protocol MKMuninGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKMuninGestureController : NSObject

{
    long long _userInteractionCount;
    UITapGestureRecognizer *_singleNavigateGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSDate *_singleTapTime;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    long long _lastZoomDirection;
    double _startZoomScale;
    double _lastZoomScale;
    _Bool _readyToReplayTap;
    _Bool _navigatingEnabled;
    _Bool _panningEnabled;
    _Bool _pinchingEnabled;
    id <MKMuninGestureControllerDelegate> _delegate;
    MKMuninView *_muninView;
}

@property (weak, nonatomic) MKMuninView *muninView;
@property (weak, nonatomic) id <MKMuninGestureControllerDelegate> delegate;
@property (nonatomic) _Bool navigatingEnabled;
@property (nonatomic) _Bool panningEnabled;
@property (nonatomic) _Bool pinchingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handlePan:(id)arg1;
- (id)initWithMuninView:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_moveBackToReplayTap;

@end
