//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CEKLightingCube, CEKLightingCubeAppearance;

@interface CEKLightingCubeRenderer : NSObject
{
    CEKLightingCube *_cube;
    CEKLightingCubeAppearance *_appearance;
    long long _components;
}

// - (void).cxx_destruct;
- (void)renderInContext:(CGContext )arg1 size:(CGSize)arg2 scale:(double)arg3 cornerRadius:(double)arg4 stroke:(double)arg5;
- (id)initWithCube:(id)arg1 appearance:(id)arg2 components:(long long)arg3;

@end

