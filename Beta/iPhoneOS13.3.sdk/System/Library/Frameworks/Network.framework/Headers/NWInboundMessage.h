/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Network/NWMessage.h>

@class NSData;

@interface NWInboundMessage : NWMessage

@property (nonatomic, readonly) NSData *content;

@end
