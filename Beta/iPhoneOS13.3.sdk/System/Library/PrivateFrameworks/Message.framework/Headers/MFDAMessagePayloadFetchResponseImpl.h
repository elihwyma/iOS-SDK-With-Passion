/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject

{
    _Bool streaming;
    _Bool streamingDone;
    NSData *data;
}

- (id)data;
- (_Bool)streaming;
- (_Bool)streamingDone;
- (id)initWithData:(id)arg1 streaming:(_Bool)arg2 streamingDone:(_Bool)arg3;

@end
