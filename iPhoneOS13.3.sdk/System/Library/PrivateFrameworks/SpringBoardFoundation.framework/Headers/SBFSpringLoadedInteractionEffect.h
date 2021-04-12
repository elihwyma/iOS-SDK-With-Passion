//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol SBFSpringLoadedInteractionEffectDelegate, UISpringLoadedInteractionEffect;

@interface SBFSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect>
{
    id <UISpringLoadedInteractionEffect> _blinkEffect;
    BOOL _useFastBlinkAnimation;
    id <SBFSpringLoadedInteractionEffectDelegate> _delegate;
}

@property(nonatomic) __weak id <SBFSpringLoadedInteractionEffectDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL useFastBlinkAnimation; // @synthesize useFastBlinkAnimation=_useFastBlinkAnimation;
// - (void).cxx_destruct;
- (id)fastBlinkAnimation;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)init;

@end

