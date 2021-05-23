/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEInternetNexus.h>

@class NSArray;

@interface NEIPsecNexus : NEInternetNexus

{
    NSArray *_nexusInstances;
}

@property (retain, nonatomic) NSArray *nexusInstances;

- (id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(_Bool)arg3;
- (_Bool)setDefaultInputHandler:(struct nw_protocol *)arg1;
- (void)setRemotePacketProxy:(id)arg1;
- (id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned int)arg3 netifRingSize:(unsigned int)arg4 kernelPipeTxRingSize:(unsigned int)arg5 kernelPipeRxRingSize:(unsigned int)arg6;
- (id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned int)arg3;

@end
