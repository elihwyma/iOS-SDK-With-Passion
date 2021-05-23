/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _RMSMessageRecord : NSObject

{
    unsigned short _messageType;
    id _responseBlock;
}

@property (nonatomic) unsigned short messageType;
@property (retain, nonatomic) id responseBlock;

@end
