//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorRecipe-Protocol.h>

@interface ISGenericRecipe : NSObject <ISCompositorRecipe>
{
    NSUInteger _options;
}

@property(nonatomic) NSUInteger options; // @synthesize options=_options;
- (id)layerTreeForSize:(CGSize)arg1 scale:(double)arg2;

@end

