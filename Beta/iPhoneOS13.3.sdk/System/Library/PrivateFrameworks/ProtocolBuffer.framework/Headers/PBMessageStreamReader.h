/*
 Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <Foundation/NSObject.h>

@class NSInputStream;

@interface PBMessageStreamReader : NSObject

{
    NSInputStream *_stream;
    Class _classOfNextMessage;
    unsigned long long _position;
}

@property (nonatomic) Class classOfNextMessage;
@property (nonatomic, readonly) unsigned long long position;

- (void)dealloc;
- (id)initWithStream:(id)arg1;
- (id)nextMessage;

@end
