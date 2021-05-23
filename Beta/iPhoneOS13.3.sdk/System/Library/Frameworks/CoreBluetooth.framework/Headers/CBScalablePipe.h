/*
 Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <Foundation/NSObject.h>

@class CBCentral, CBPeer, CBScalablePipeManager, NSInputStream, NSOutputStream, NSString;

@interface CBScalablePipe : NSObject

{
    CBScalablePipeManager *_pipeManager;
    int _socket;
    _Bool _reliablePipe;
    CBCentral *_central;
    CBPeer *_peer;
    NSString *_name;
    long long _type;
    long long _priority;
    NSInputStream *_input;
    NSOutputStream *_output;
    void *_channel;
}

@property (nonatomic, readonly) CBCentral *central;
@property (nonatomic, readonly) CBPeer *peer;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) _Bool reliablePipe;
@property (nonatomic, readonly) NSInputStream *input;
@property (nonatomic, readonly) NSOutputStream *output;
@property (nonatomic, readonly) void *channel;

- (void)dealloc;
- (id)description;
- (void)setOrphan;
- (id)initWithPipeManager:(id)arg1 info:(id)arg2;

@end
