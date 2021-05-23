/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsFunction.h>

@class MTLFunctionConstantValues;

@interface MTLDebugFunction : MTLToolsFunction

{
    MTLFunctionConstantValues *_constantValues;
}

@property (retain, nonatomic) MTLFunctionConstantValues *constantValues;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id)bitcodeData;

@end
