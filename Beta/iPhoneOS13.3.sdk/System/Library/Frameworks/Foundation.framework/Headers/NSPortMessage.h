/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSPort;

@interface NSPortMessage : NSObject

{
    NSPort *localPort;
    NSPort *remotePort;
    NSMutableArray *components;
    unsigned int msgid;
    void *reserved2;
    void *reserved;
}

@property (copy, readonly) NSArray *components;
@property (retain, readonly) NSPort *receivePort;
@property (retain, readonly) NSPort *sendPort;
@property unsigned int msgid;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (_Bool)sendBeforeDate:(id)arg1;

@end
