//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISEGestureFeature.h>

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEDiagonalHysteresisRecognizeGestureFeature : _UISEGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;
    CGPoint _initialLocation;
}

// - (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample )arg1;
- (id)initWithSettings:(id)arg1;

@end

