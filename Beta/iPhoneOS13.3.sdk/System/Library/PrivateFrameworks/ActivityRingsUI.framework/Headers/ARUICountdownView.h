/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@class ARUICountdownController;

@interface ARUICountdownView

{
    ARUICountdownController *_countdownController;
    ARUICountdownController *_backingTrackController;
}

@property (nonatomic, readonly) ARUICountdownController *countdownController;

+ (id)countdownViewConfiguredForCompanion;
+ (id)countdownViewConfiguredForWatch;

- (id)initWithCountdownController:(id)arg1;
- (id)initWithCountdownController:(id)arg1 backingTrackController:(id)arg2;
- (id)backingTrackController;

@end
