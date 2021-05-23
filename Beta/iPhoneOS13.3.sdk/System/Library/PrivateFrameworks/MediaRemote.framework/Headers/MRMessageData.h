/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRProtocolMessage, NSData;

__attribute__((visibility("hidden")))
@interface MRMessageData : NSObject

{
    NSData *_data;
    MRProtocolMessage *_message;
    CDUnknownBlockType _dataBlock;
    long long _readPosition;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) MRProtocolMessage *message;
@property (nonatomic) long long readPosition;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic, readonly) _Bool canPurge;

- (id)initWithMessage:(id)arg1 createDataBlock:(CDUnknownBlockType)arg2;

@end
