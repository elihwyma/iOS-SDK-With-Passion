//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoardUI/BSUIAnimationFactory.h>

@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory
{
    _UIViewAnimationAttributes *_attributes;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)_animateWithAdditionalDelay:(double)arg1 options:(NSUInteger)arg2 actions:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)factoryWithTimingFunction:(id)arg1;
- (double)delay;
- (double)duration;
- (id)_initWithSettings:(id)arg1;
- (id)_initWithAttributes:(id)arg1;

@end

