/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface SBSClient : NSObject

{
    NSXPCConnection *_connection;
    unsigned long long _clientType;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) unsigned long long clientType;

@end
