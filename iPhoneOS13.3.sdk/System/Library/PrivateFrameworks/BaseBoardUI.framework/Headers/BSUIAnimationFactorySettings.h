//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface BSUIAnimationFactorySettings : PTSettings
{
    BOOL _slowAnimations;
    double _slowDownFactor;
}

+ (id)settingsControllerModule;
@property(nonatomic) double slowDownFactor; // @synthesize slowDownFactor=_slowDownFactor;
@property(nonatomic) BOOL slowAnimations; // @synthesize slowAnimations=_slowAnimations;
- (double)effectiveSlowDownFactor;
- (void)setDefaultValues;

@end
