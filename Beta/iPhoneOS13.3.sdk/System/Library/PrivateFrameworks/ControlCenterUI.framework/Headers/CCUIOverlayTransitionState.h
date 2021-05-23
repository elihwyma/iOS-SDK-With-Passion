/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

#import <ControlCenterUI/Swift-Protocol.h>

@interface CCUIOverlayTransitionState : NSObject <Swift>

{
    _Bool _interactive;
    unsigned long long _type;
    double _progress;
    double _presentationProgress;
    double _clampedPresentationProgress;
    double _nonZeroPresentationProgress;
    double _snappedPresentationProgress;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (nonatomic, readonly) double presentationProgress;
@property (nonatomic, readonly) double clampedPresentationProgress;
@property (nonatomic, readonly) double nonZeroPresentationProgress;
@property (nonatomic, readonly) double snappedPresentationProgress;

+ (_Bool)isSignificantTransitionFrom:(id)arg1 to:(id)arg2;
+ (_Bool)isSignificantStatusBarTransitionFrom:(id)arg1 to:(id)arg2;
+ (id)stateWithType:(unsigned long long)arg1 interactive:(_Bool)arg2 progress:(double)arg3;
+ (id)fullyPresentedState;
+ (id)fullyDismissedState;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)snappedStatusBarPresentationProgress;
- (id)_initWithType:(unsigned long long)arg1 interactive:(_Bool)arg2 progress:(double)arg3;

@end
