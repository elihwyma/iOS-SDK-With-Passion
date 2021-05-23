/*
 Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <Foundation/NSObject.h>

@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject

{
    NSOutputStream *_stream;
}

- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (_Bool)writeMessage:(id)arg1;

@end
