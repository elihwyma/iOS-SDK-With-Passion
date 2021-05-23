/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NMRIDSMessageHandler : NSObject

{
    unsigned short _messageType;
    id _target;
    SEL _action;
}

@property (nonatomic) unsigned short messageType;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

@end
