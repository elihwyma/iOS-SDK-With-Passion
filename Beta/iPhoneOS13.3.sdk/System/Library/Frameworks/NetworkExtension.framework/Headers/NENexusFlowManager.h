/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_nw_channel;

@interface NENexusFlowManager : NSObject

{
    NSObject<OS_nw_channel> *_kernelChannel;
    struct nw_protocol *_protocol;
    struct nw_protocol *_defaultInputProtocol;
    NSMutableDictionary *_userChannels;
}

@property struct nw_protocol *protocol;
@property struct nw_protocol *defaultInputProtocol;
@property (retain) NSMutableDictionary *userChannels;
@property (retain) NSObject<OS_nw_channel> *kernelChannel;

- (void)dealloc;

@end
