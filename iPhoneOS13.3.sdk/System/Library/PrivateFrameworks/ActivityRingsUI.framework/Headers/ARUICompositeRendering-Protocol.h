//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol MTLCommandBuffer, MTLRenderCommandEncoder, MTLTexture;

@protocol ARUICompositeRendering <NSObject>
- (void)compositeWithCommandEncoder:(id <MTLRenderCommandEncoder>)arg1 textures:(NSArray *)arg2;
- (void)compositeWithCommandEncoder:(id <MTLRenderCommandEncoder>)arg1 texture:(id <MTLTexture>)arg2;
- 
- (void)prewarmCompositeRenderPipeline;
@end

